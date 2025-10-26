#include <stdio.h>
#include <string.h>

int validateLogin(char username[], char password[]) {
    int ulen = strlen(username);
    int plen = strlen(password);

    if (ulen < 5 || ulen > 10)
        printf("Invalid username length\n");
    else if (plen < 6 || plen > 12)
        printf("Invalid password length\n");
    else
        printf("Login successful (if credentials are correct)\n");

    return 0;
}

int main() {
    char username[50], password[50];

    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);

    validateLogin(username, password);
    return 0;
}








/*
## Example 2: Login Module

### Specification
- Username: must be 5–10 characters
- Password: must be 6–12 characters
- System validates both fields

---

### 1. Equivalence Class Partitioning (ECP)

| Input Field | Valid Range | Invalid Ranges      | Representative Values                |
| ------------ | ------------ | ------------------- | ------------------------------------ |
| Username     | 5–10 chars   | <5 chars, >10 chars | "admin1", "abc", "longusername123"   |
| Password     | 6–12 chars   | <6 chars, >12 chars | "secret1", "123", "verylongpassword" |

ECP Test Cases:

| TC | Username     | Password         | Expected Output                |
| -- | ------------ | ---------------- | ------------------------------ |
| 1  | admin1       | secret1          | Valid login (if creds correct) |
| 2  | abc          | secret1          | Invalid (username too short)   |
| 3  | adminadmin11 | secret1          | Invalid (username too long)    |
| 4  | admin1       | 123              | Invalid (password too short)   |
| 5  | admin1       | verylongpassword | Invalid (password too long)    |

---

### 2. Boundary Value Analysis (BVA)

Username boundaries: 4, 5, 10, 11
Password boundaries: 5, 6, 12, 13

| TC | Username Length | Password Length | Expected Result              |
| -- | --------------- | --------------- | ---------------------------- |
| 1  | 4               | 6               | Invalid (username too short) |
| 2  | 5               | 6               | Valid                        |
| 3  | 10              | 6               | Valid                        |
| 4  | 11              | 6               | Invalid (username too long)  |
| 5  | 5               | 5               | Invalid (password too short) |
| 6  | 5               | 6               | Valid                        |
| 7  | 5               | 12              | Valid                        |
| 8  | 5               | 13              | Invalid (password too long)  |

---

Summary Table:

| Technique | What It Tests                      | Example Input Regions                     |
| ---------- | ---------------------------------- | ----------------------------------------- |
| ECP        | Logical partitions (valid/invalid) | Low, medium, high ranges                  |
| BVA        | Edge conditions                    | Just below, on, and just above boundaries |
*/
