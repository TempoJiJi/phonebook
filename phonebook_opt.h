#ifndef _PHONEBOOK_H
#define _PHONEBOOK_H

#define MAX_LAST_NAME_SIZE 16

#define OPT 1

#define SIZE 102400

typedef struct __PHONE_BOOK_DETAILS {
    char firstName[16];
    char email[16];
    char phone[10];
    char cell[10];
    char addr1[16];
    char addr2[16];
    char city[16];
    char state[2];
    char zip[5];
} Details;

typedef struct __PHONE_BOOK_ENTRY {
    char lastName[MAX_LAST_NAME_SIZE];
    struct __PHONE_BOOK_ENTRY *pNext;
    Details *details;
} entry;

typedef struct _hash_table {
    entry **table;
} hash_table;

unsigned int hash(hash_table *hashtable , char *str);
hash_table *create_hash_table();
entry *findName(char *lastname, hash_table *hashtable);
void append(char *lastName, hash_table *hashtable);

#endif
