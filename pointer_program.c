int main (int argc , char * argv [])
{
    char a[] = "ptr264";
    char *ptr = a ;
    char **ptrr = &ptr ;

    printf ("*( ptr + 1) = %c\n" , *(ptr + 1)); // [blank 1]
    ptr += 1;
    printf ("a[3] = %c\n" , a[3]); // [blank 2]
    printf ("ptr[3] = %d\n" , *( ptr +3)) // [blank 3]
    *ptrr = *ptrr + 1;
    printf ("*(* ptrr + 1) = %d\n" , *(* ptrr + 1)); // [blank 4]
    printf ("*ptr = %d\n" , *ptr ); //[blank 5]
    return EXIT_SUCCESS ;
}
