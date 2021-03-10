#ifndef MARTY_LIBRARY_H
#define MARTY_LIBRARY_H

const float PI = 3.141592;

int fnPlus(int nA, int nB);
int fnMinus(int nA, int nB);
int fnMultyply(int nA, int nB);
int fnDevide(int nA, int nB);
int incr(int c);
float SofTriangle(int a, int b);
int NOK(int a, int b);
float SofRectangle(float sOfTriangle);
float AbsoluteValue(float num);
float sqaureRoot(float num);
void reverse(char str[]);
void printstr(char *s);
int my_atoi(char *s);
double my_atof(char *s);
void my_itoa(int n, char s[]);
void lower(char s[]);
int getline(char s[], int lim);
void countLetters(char s[], int n[]);
int compare(char *s, char *t);
void squeeze(char s[], int c);
double Mult(int endNumber);
double average(unsigned int *arr, int arrSize);
void my_swap(int *ptr_a, int *ptr_b);
void Mystrcpy(char *t, char *s);
void copyString(char *str1, char *str2);
int isLeapYear(unsigned int year);
void PalindromeCheck(unsigned int *arr, int l);
float avgOfRandNumbers(int *s, int size);

#endif /* MARTY_LIBRARY_H */