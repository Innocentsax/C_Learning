#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

#define MAX_NAME 256
#define TABLE_SIZE 10
#define DELETED_NODE (person*)(0xFFFFFFFFFFFFFFFUL)


// Lesson == Adding Hash Table
typedef struct 
{
  char name[MAX_NAME];
  int age;
  
}person;

person * hash_table[TABLE_SIZE];

/* Lets create an empty table */
void init_hash_table()
{
  for(int i = 0; i < TABLE_SIZE; i++)
      hash_table[i] = NULL;
}
unsigned int hash(char *name)
{
  int length = strnlen(name, MAX_NAME);
  unsigned int hash_value = 0;
  for(int i = 0; i < length; i++){
      hash_value += name[i];//check it out
    
      hash_value = (hash_value * name[i]) % TABLE_SIZE; // TABLE_SIZE is define above @header
  }
  return hash_value;
}
//Transvering through the Table
/*void print_table()
{
  printf("Start\n");
  for(int i = 0; i < TABLE_SIZE; i++)
    {
      if (hash_table[i] == NULL)
      {
        printf("\t%d\t---\n", i);
      }
      else{
        printf("\t%d\t%s\n", i, hash_table[i]->name);
      }
    }
  printf("End\n");
}*/
//Updating print function for deletion
void print_table()
{
  printf("Start\n");
  for(int i = 0; i < TABLE_SIZE; i++)
    {
      if (hash_table[i] == NULL)
      {
        printf("\t%i\t---\n", i);
      }
      else if (hash_table[i] == DELETED_NODE){
        printf("\t%i\t---<deleted>\n", i);
      }
      else{
        printf("\t%i\t%s\n", i, hash_table[i]->name);
      }
    }
  printf("End\n");
}
//Inserting a person in the table
/*bool hash_table_insert(person *p){
  if (p == NULL)
    return false;
  int index = hash(p->name);
  if(hash_table[index] != NULL){
    return false;
  }
  hash_table[index] = p;
  return true;
}*/
//Inserting a person in the table and treating Collusion
  //Handling Collusion (2 types: 1.Open addressing 2. external Chaining)
bool hash_table_insert(person *p){
  if (p == NULL)
    return false;
  int index = hash(p->name);
  for (int i = 0; i < TABLE_SIZE; i++){
    int try = (i + index) % TABLE_SIZE;
    if (hash_table[try] == NULL || hash_table[try] == DELETED_NODE){
      hash_table[try] = p;
      return true;
    }
  }
  return false;
}

//Find  a person in the table by their name
/*person *hash_table_lookup(char *name){
  int index = hash(name); 
  if (hash_table[index] != NULL && 
    strncmp(hash_table[index]->name, name, TABLE_SIZE) ==0)
  {
    return hash_table[index];
  }
  else{
    return NULL;
  }
}*/
//Managering collosion
/*person *hash_table_lookup(char *name){
  int index = hash(name);
  for (int i = 0; i < TABLE_SIZE; i++){
    int try = (i + index) % TABLE_SIZE;
    if (hash_table[try] != NULL && 
    strncmp(hash_table[index]->name, name, TABLE_SIZE) ==0){
      return hash_table[try];
    }
  }
  return NULL;
}*/
//Updating Lookup Delete
person *hash_table_lookup(char *name){
  int index = hash(name);
  for (int i = 0; i < TABLE_SIZE; i++){
    int try = (i + index) % TABLE_SIZE;
    if(hash_table[try] == NULL){
      return false; //not here
    }
    if (hash_table[try] == DELETED_NODE) continue; 
    if (strncmp(hash_table[index]->name, name, TABLE_SIZE) ==0){
      return hash_table[try];
    }
  }
  return NULL;
}
//Deleting a Person Out of the table
/*person *hash_table_delete(char *name){
  int index = hash(name);
  if (hash_table[index] != NULL && 
    strncmp(hash_table[index]->name, name, TABLE_SIZE) ==0)
  {
    person *tmp = hash_table[index];
    hash_table[index] = NULL;
    return hash_table[index];
  }
  else{
    return NULL;
  }
}*/
//Deletion using Collision
/*person *hash_table_delete(char *name){
  int index = hash(name);
  for (int i = 0; i < TABLE_SIZE; i++){
    int try = (i + index) % TABLE_SIZE;
    if (hash_table[try] != NULL && 
    strncmp(hash_table[index]->name, name, TABLE_SIZE) ==0){
      person* tmp = hash_table[try];
      hash_table[try] = DELETED_NODE;
      return tmp;
    }
  }
  return NULL;
}*/
//Updating Lookup Delete
person *hash_table_delete(char *name){
  int index = hash(name);
  for (int i = 0; i < TABLE_SIZE; i++){
    int try = (i + index) % TABLE_SIZE;
    if (hash_table[try] == NULL) return NULL;
    if (hash_table[try] == DELETED_NODE) continue;
    if (strncmp(hash_table[index]->name, name, TABLE_SIZE) ==0){
      person* tmp = hash_table[try];
      hash_table[try] = DELETED_NODE;
      return tmp;
    }
  }
  return NULL;
}

int main()
{
  init_hash_table();

  person Jacob = {.name="Jacob", .age=34};
  person Peter = {.name="Peter", .age=23};
  person Daniel = {.name="Daniel", .age=56};
  person max = {.name="max", .age=25};
  person Gideon = {.name="Gideon", .age=2};
  person Isaac = {.name="Isaac", .age=5};
  person Kelvin = {.name="Kelvin", .age=6};
  person Obed = {.name="Obed", .age=9};
  person Mary = {.name="Mary", .age=67};

  hash_table_insert(&Jacob);
  hash_table_insert(&Peter);
  hash_table_insert(&Daniel);
  hash_table_insert(&max);
  hash_table_insert(&Gideon);
  hash_table_insert(&Isaac);
  hash_table_insert(&Kelvin);
  hash_table_insert(&Obed);
  hash_table_insert(&Mary);
  
  print_table();
  
  person *tmp = hash_table_lookup("Innocent");
  if(tmp == NULL){
    printf("Not found!\n");
  }
  else{
    printf("Found %s.\n", tmp->name);
  }

  tmp = hash_table_lookup("Jacob");
  if(tmp == NULL){
    printf("Not found!\n");
  }
  else{
    printf("Found %s.\n", tmp->name);
  }

  hash_table_delete("Jacob");
  tmp = hash_table_lookup("Jacob");
  if(tmp == NULL){
    printf("Not found!\n");
  }
  else{
    printf("Found %s.\n", tmp->name);
  }
  
  
  return 0;
}

//Lesson 1 == Intro
/*typedef struct 
{
  char name[MAX_NAME];
  int age;
  
}person;

unsigned int hash(char *name)
{
  int length = strnlen(name, MAX_NAME);
  unsigned int hash_value = 0;
  for(int i = 0; i < length; i++){
      hash_value += name[i];//check it out
    
      hash_value = (hash_value * name[i]) % TABLE_SIZE; // TABLE_SIZE is define above @header
  }
  return hash_value;
}

int main()
{
  printf("Jacob => %u\n", hash("Jacob"));
  printf("Dan => %u\n", hash("Daniel"));
  printf("Moses => %u\n", hash("Moses"));
  printf("Peter => %u\n", hash("Peter"));
  printf("Innocent => %u\n", hash("Innocent"));
  return 0;
}*
