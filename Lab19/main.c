#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char filmname [20];
    char genre [20];
    int day;
    int month;
    int year;
    int hour;
    int minute;
    int budg;
} kinoseans;

int writefile (kinoseans * kino, int size){
    FILE *out;
    char fname [20] = "st. txt";
    if ((out = fopen (fname, "wt")) == NULL)
    {
        printf("Ошибка открытия файла для записи");
    }
        
        for (int i = 0; i < size; i++) // цикл по всем записям
            fprintf(out," Имя:%20 ; Жанр:%20 ; Дата:%2d:%2d:%4d; Время:%2d:%2d; Бюджет: %d\n",kino[i].filmname, kino[i].genre, kino[i].day, kino[i].month,kino[i].year, kino[i].hour, kino[i].minute, kino[i].budg) ; // запись полей структуры
        fclose (out);
        return 1;
    }
    
int creat_file(){
    char fname [20] = "count. txt"; // имя файла
    FILE *out; // файл чисел
    puts ("Создание файла");
    if ((out = fopen (fname, "wt")) == NULL)
    {
        printf ("Ошибка открития файла для записи");
        return 0;
    }
    int s[100];
    printf("Введите значение\n");
    scanf("%s",&s);
    /********начало работы с файлом**********/
    fprintf (out, "\n%s", s);// ввод числа 5 в файл
    /********конец работы с файлом **********/
    fclose (out); // закрыть файл
    return 1;
}

int edit_file(){
    char fname [20] = "number. txt"; // имя файла
    FILE *out; // файл чисел
    puts ("Создание файла");
    if ((out = fopen (fname, "a")) == NULL)
    {
        printf ("Ошибка открития файла для записи");
        return 0;
    }
    int s[100];
    printf("Введите значение\n");
    scanf("%s",&s);
    /********начало работы с файлом**********/
    fprintf (out, "\n%s", s);// ввод числа 5 в файл
    /********конец работы с файлом **********/
    fclose (out); // закрыть файл
    return 1;
}

int main (void)
{
    int d = 1;
    int n;
//    printf("1)Запись в новый файл\n2)Дозапись в существующий");
    while (d==1) {
        printf("1)Запись в новый файл\n2)Дозапись в существующий\n3)Запись в структуру\n");
        scanf("%i",&n);
        switch (n) {
            case 1:
                creat_file();
                break;
            case 2:
                edit_file();
                break;
            case 3:
//                writefile(st, <#kinoseans *kino#>, <#int size#>)();
                break;
            default:
                break;
        }
    }
}
