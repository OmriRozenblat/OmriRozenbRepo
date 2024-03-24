//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define MAX_NAME_LENGTH 100
//#define MAX_PHONE_LENGTH 100
//#define MAX_EMAIL_LENGTH 100
//#define MAX_CONTACTS 100
//
//void addContact(char firstNames[][MAX_NAME_LENGTH], char familyNames[][MAX_NAME_LENGTH],
//                char phones[][MAX_PHONE_LENGTH], char emails[][MAX_EMAIL_LENGTH],
//                int *numContacts);
//
//void removeContact(char firstNames[][MAX_NAME_LENGTH], char familyNames[][MAX_NAME_LENGTH],
//                   char phones[][MAX_PHONE_LENGTH], char emails[][MAX_EMAIL_LENGTH],
//                   int *numContacts);
//
//void searchContact(const char firstNames[][MAX_NAME_LENGTH], const char familyNames[][MAX_NAME_LENGTH],
//                   const char phones[][MAX_PHONE_LENGTH], const char emails[][MAX_EMAIL_LENGTH],
//                   int numContacts);
//
//void printAllContacts(const char firstNames[][MAX_NAME_LENGTH], const char familyNames[][MAX_NAME_LENGTH],
//                      const char phones[][MAX_PHONE_LENGTH], const char emails[][MAX_EMAIL_LENGTH],
//                      int numContacts);
//
//int main() {
//    char firstNames[MAX_CONTACTS][MAX_NAME_LENGTH];
//    char familyNames[MAX_CONTACTS][MAX_NAME_LENGTH];
//    char phones[MAX_CONTACTS][MAX_PHONE_LENGTH];
//    char emails[MAX_CONTACTS][MAX_EMAIL_LENGTH];
//    int numContacts = 0;
//    int choice;
//
//    do {
//        printf("\n1. Add Contact\n"
//               "2. Remove Contact\n"
//               "3. Search Contact\n"
//               "4. Print All Contacts\n"
//               "5. Exit\n"
//               "Enter choice: ");
//        scanf("%d", &choice);
//
//        switch (choice) {
//            case 1:
//                addContact(firstNames, familyNames, phones, emails, &numContacts);
//                break;
//
//            case 2:
//                removeContact(firstNames, familyNames, phones, emails, &numContacts);
//                break;
//
//            case 3:
//                searchContact(firstNames, familyNames, phones, emails, numContacts);
//                break;
//
//            case 4:
//                printAllContacts(firstNames, familyNames, phones, emails, numContacts);
//                break;
//
//            case 5:
//                printf("Exiting program.\n");
//                break;
//
//            default:
//                printf("Invalid choice. Please try again.\n");
//        }
//    } while (choice != 5);
//
//    return 0;
//}
//
//void addContact(char firstNames[][MAX_NAME_LENGTH], char familyNames[][MAX_NAME_LENGTH],
//                char phones[][MAX_PHONE_LENGTH], char emails[][MAX_EMAIL_LENGTH],
//                int *numContacts) {
//    if (*numContacts >= MAX_CONTACTS) {
//        printf("Contact list is full.\n");
//        return;
//    }
//
//    printf("Enter first name: ");
//    scanf(" %s", firstNames[*numContacts]);
//
//    printf("Enter family name: ");
//    scanf(" %s", familyNames[*numContacts]);
//
//    printf("Enter phone number: ");
//    scanf(" %s", phones[*numContacts]);
//
//    printf("Enter email: ");
//    scanf(" %s", emails[*numContacts]);
//
//    (*numContacts)++;
//    printf("Contact added successfully.\n");
//}
//
//void removeContact(char firstNames[][MAX_NAME_LENGTH], char familyNames[][MAX_NAME_LENGTH],
//                   char phones[][MAX_PHONE_LENGTH], char emails[][MAX_EMAIL_LENGTH],
//                   int *numContacts) {
//    if (*numContacts == 0) {
//        printf("No contacts to remove.\n");
//        return;
//    }
//
//    char searchFirstName[MAX_NAME_LENGTH];
//    char searchFamilyName[MAX_NAME_LENGTH];
//
//    printf("Enter first name to remove: ");
//    scanf(" %s", searchFirstName);
//
//    printf("Enter family name to remove: ");
//    scanf(" %s", searchFamilyName);
//
//    int foundIndex = -1;
//    for (int i = 0; i < *numContacts; ++i) {
//        if (strcmp(firstNames[i], searchFirstName) == 0 && strcmp(familyNames[i], searchFamilyName) == 0) {
//            foundIndex = i;
//            break;
//        }
//    }
//
//    if (foundIndex != -1) {
//        // Remove the contact by shifting elements
//        for (int i = foundIndex; i < *numContacts - 1; ++i) {
//            snprintf(firstNames[i], MAX_NAME_LENGTH, "%s", firstNames[i + 1]);
//            snprintf(familyNames[i], MAX_NAME_LENGTH, "%s", familyNames[i + 1]);
//            snprintf(phones[i], MAX_PHONE_LENGTH, "%s", phones[i + 1]);
//            snprintf(emails[i], MAX_EMAIL_LENGTH, "%s", emails[i + 1]);
//        }
//
//        (*numContacts)--;
//        printf("Contact removed successfully.\n");
//    } else {
//        printf("Contact not found.\n");
//    }
//}
//
//void searchContact(const char firstNames[][MAX_NAME_LENGTH], const char familyNames[][MAX_NAME_LENGTH],
//                   const char phones[][MAX_PHONE_LENGTH], const char emails[][MAX_EMAIL_LENGTH],
//                   int numContacts) {
//    if (numContacts == 0) {
//        printf("No contacts available.\n");
//        return;
//    }
//
//    char searchFirstName[MAX_NAME_LENGTH];
//    char searchFamilyName[MAX_NAME_LENGTH];
//
//    printf("Enter First name to search: ");
//    scanf(" %s", searchFirstName);
//
//    printf("Enter Family name to search: ");
//    scanf(" %s", searchFamilyName);
//
//    int found = 0;
//    for (int i = 0; i < numContacts; ++i) {
//        if (strcmp(firstNames[i], searchFirstName) == 0 && strcmp(familyNames[i], searchFamilyName) == 0) {
//            printf("Contact found:\n"
//                   "First Name: %s\nFamily Name: %s\nPhone: %s\nEmail: %s\n",
//                   firstNames[i], familyNames[i], phones[i], emails[i]);
//            found = 1;
//            break;
//        }
//    }
//
//    if (!found) {
//        printf("Contact not found.\n");
//    }
//}
//
//void printAllContacts(const char firstNames[][MAX_NAME_LENGTH], const char familyNames[][MAX_NAME_LENGTH],
//                      const char phones[][MAX_PHONE_LENGTH], const char emails[][MAX_EMAIL_LENGTH],
//                      int numContacts) {
//    if (numContacts == 0) {
//        printf("No contacts available.\n");
//        return;
//    }
//
//    printf("All Contacts:\n");
//    for (int i = 0; i < numContacts; ++i) {
//        printf("Contact %d:\n"
//               "First Name: %s\nFamily Name: %s\nPhone: %s\nEmail: %s\n",
//               i + 1, firstNames[i], familyNames[i], phones[i], emails[i]);
//    }
//}
