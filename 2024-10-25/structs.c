#include <stdio.h>
#include <string.h>

typedef struct
{
    int day;
    int month;
    int year;
} date_t;

date_t date_create (int day, int month, int year)
{
    date_t dt;
    dt.day = day;
    dt.month = month;
    dt.year = year;
    return dt;
}
date_t date_create_undefined  ()
{
    date_t dt;
    dt.day = -1;
    return dt;
}

void date_print (date_t date) 
{
    if (date.day == -1){
        printf("  -  -    ");
    } else {
        printf("%d-%d-%d", date.day, date.month, date.year);
    }
}

void date_println (date_t date)
{
    date_print(date);
    printf("\n");
} 

#define STUDENT_MAX_NAME 32

typedef struct 
{
    int number;
    char name[STUDENT_MAX_NAME];
    date_t  dstart;
    date_t  dend;
    //...
} student_t;

student_t student_create (int number, char name[STUDENT_MAX_NAME], date_t start)
{
    student_t saux;
    saux.number = number;
    strcpy(saux.name, name);
    saux.dstart = start;
    saux.dend = date_create_undefined();
    return saux;
}

void student_println (student_t student)
{
    printf("\t%d | %s | ", student.number, student.name);
    date_print(student.dstart);
    printf(" | ");
    date_print(student.dend);
    printf("\n");
}

#define CLASS_MAX   60

int main ()
{
    date_t dtoday = date_create(25, 10, 2024);
    date_println(dtoday);

    student_t s1 = student_create(49000, "João Silva", dtoday);
    student_println(s1);

    // ------ Teste coleção de students ------
    student_t pg_students [CLASS_MAX];
    int       pg_nstudents = 0;

    pg_students[pg_nstudents++] = student_create(49000, "João Silva", dtoday);
    pg_students[pg_nstudents++] = student_create(49003, "Maria João Antunes", dtoday);
    pg_students[pg_nstudents++] = student_create(49007, "Maria Silva", dtoday);
    pg_students[pg_nstudents++] = student_create(49050, "José Filipe Costa", dtoday);
    pg_students[pg_nstudents++] = student_create(50070, "António da Silva Pereira", dtoday);
    pg_students[pg_nstudents++] = student_create(51030, "Carlos Jorge Ribeiro", dtoday);

    for (int i= 0 ; i < pg_nstudents; i++){
        student_println(pg_students[i]);
    }
    return 0;
}