#include <stdio.h>
#include <stdlib.h>
    
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
                break;
            default:
                break;
        }
    }
}
