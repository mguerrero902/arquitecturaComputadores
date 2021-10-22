#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void primeroA()
{
    int rad;
    float PI = 3.14, area, ci;

    printf("Digite el radio del circulo: \n");
    scanf("%d", &rad);

    area = PI * rad * rad;
    printf("Area del circulo : %f \n", area);

    ci = 2 * PI * rad;
    printf("circunferencia del circulo: %f \n", ci);
}

void primeroB()
{
    char a;
    int b;
    printf("Ingrese el caracter \n");
    scanf("%s", &a);
    b = a;
    printf("Valor en ASCII = %d \n", b);
}

void primeroC()
{
    float b, h, area;

    printf("Ingrese la altura y la base del triangulo : ");
    scanf("%f %f", &h, &b);

    area = (h * b) / 2;
    printf("El area del triengulo es: %f\n", area);
}

void segundoA()
{
    double num1, num2, num3;

    printf("Ingrese 3 numeros: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    if (num1 >= num2)
    {
        if (num1 >= num3)
            printf("%.2lf es el numero mas grande. ", num1);
        else
            printf("%.2lf es el numero mas grande. ", num3);
    }
    else
    {
        if (num2 >= num3)
            printf("%.2lf es el numero mas grande. ", num2);
        else
            printf("%.2lf es el numero mas grande.", num3);
    }
}

void segundoB()
{
    int num;

    printf("\nIngrese un numero:\n");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d es par\n", num);
    }
    else
    {
        printf("%d es impar\n", num);
    }
}

void segundoC()
{
    char c;
    printf("Ingrese un caracter: ");
    scanf("%s", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("%c es un alafanumerico.", c);
    else
        printf("%c no es un alafanumerico.", c);
}

void terceroA()
{
    int num, rem, rev = 0;

    printf("Ingrese un numero :\n");
    scanf("%d", &num);

    while (num >= 1)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    printf("Numero invertido : %d \n", rev);
}

void terceroB()
{
    int n, n1, rem, num = 0;

    printf("Ingrese un numero entero positivo: \n");
    scanf("%d", &n);

    n1 = n;

    while (n1 != 0)
    {
        rem = n1 % 10;
        num += rem * rem * rem;
        n1 /= 10;
    }
    if (num == n)
        printf("%d Es un numero Armstrong.\n\n", n);
    else
        printf("%d No es un numero Armstrong.\n\n", n);
}

void terceroC()
{
    int n, count = 1, sum = 0;

    printf("Ingrese un numero natural :\n");
    scanf("%d", &n);

    while (count <= n)
    {
        sum += count;
        ++count;
    }

    printf("La suma del numero natural es = %d\n", sum);
}

void cuartoA()
{
    float a, b, centigrade, fahrenheit;
    int x;
    printf("1. De Fahrenheit a Celsius\n");
    printf("2. De Celsius a Fahrenheit\n");
    printf("Digite numero del Menu  \n");

    scanf("%d", &x);
    switch (x)
    {
    case 1:
        printf("Ingrese el valor de la tempreratura en Fahrenheit: \n");
        scanf("%f", &a);
        centigrade = 5 * (a - 32) / 9;
        printf("Temperatura en Celsius: %f \n", centigrade);
        break;
    case 2:
        printf("Ingrese el valor de la tempreratura en Celsius: \n");
        scanf("%f", &b);
        fahrenheit = ((9 * b) / 5) + 32;
        printf("Temperatura en Fahrenheit: %f \n", fahrenheit);
        break;
    default:
        printf("\n Numero no existe.....Intente de nuevo!!!\n");
    }
}

void cuartoB()
{
    int choice;

    printf("El lunes sera el primer día y así sucesivamente\n");
    printf("Ingrese un numero entre (1 y 7):");

    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Hoy es Lunes \n");
        break;
    case 2:
        printf("Hoy es Martes \n");
        break;
    case 3:
        printf("Hoy es Miercoles \n");
        break;
    case 4:
        printf("Hoy es Jueves \n");
        break;
    case 5:
        printf("Hoy es Viernes \n");
        break;
    case 6:
        printf("Hoy es Sabado \n");
        break;
    case 7:
        printf("Hoy es Domingo \n");
        break;
    default:
        printf("El numero digitado estad fuera del rango....intente de nuevo!!! \n");
    }
}

void cuartoC()
{
    char choice;
    int num1 = 0;
    int num2 = 0;
    int p = 0;
    int result = 0;

    printf("Ingrese el primer numero: \n");
    scanf("%d", &p);
    num1 = p;
    printf("Ingrese alguno de los siguientes operadores(+, -, *, /, %%): \n");
    //choice=getch();
    scanf("%s", &choice);
    printf("Ingrese el segundo numero: \n");
    scanf("%d", &p);
    num2 = p;

    switch (choice)
    {
    case '+':
        result = num1 + num2;
        printf("\nLa suma es = %d", result);
        break;

    case '-':
        result = num1 - num2;
        printf("\nLa resta es = %d", result);
        break;

    case '*':
        result = num1 * num2;
        printf("\nLA multiplicacion es = %d", result);
        break;

    case '/':
        result = num1 / num2;
        printf("\nLA division es= %d", result);
        break;

    case '%':
        result = num1 % num2;
        printf("\nEl modulo es = %d", result);
        break;

    default:
        printf("\nIngrese un opoerador valido!!!\n");
    }
}

void quintoA()
{
    int i, arr[50], pos, len;
    int newitem;

    printf("Ingrese el tamaño del array:\n");
    scanf("%d", &len);

    printf("Ingrese %d elementos para el array:\n", len);
    for (i = 0; i < len; i++)
        scanf("%d", &arr[i]);

    printf("ingrese el elmento que desea agregar al array:\n");
    scanf("%d", &newitem);
    printf("Ingrese la posicion donde desea agregar el elemento:\n");
    scanf("%d", &pos);

    len++;
    pos--;
    i = len - 1;

    while (i >= pos)
    {
        arr[i] = arr[i - 1];
        i--;
    }
    arr[pos] = newitem;
    printf("Array despues de ingresar el elemento\n");

    for (i = 0; i < len; i++)
        printf(" %d", arr[i]);
    printf("\n");
}

void quintoB()
{

    int arr[50];
    int i, j, k, len;

    printf("Ingrese el tamaño del array:\n");
    scanf("%d", &len);
    printf("ingrese %d elementos al array:\n", len);
    for (i = 0; i < len; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < len - 1; i++)
    {
        for (j = i + 1; j < len; j++)
        {

            if (arr[j] == arr[i])
            {
                k = j;
                while (k < (len - 1))
                {
                    arr[k] = arr[k + 1];
                    k++;
                }
                len--;
                j = i;
            }
        }
    }
    printf("Array con los elementos duplicados eliminados:\n");

    for (i = 0; i < len; i++)
        printf(" %d", arr[i]);

    printf("\n");
}

void quintoC()
{
    int i, arr[50], pos, len;

    printf("Ingrese el tamaño del array:\n");
    scanf("%d", &len);

    printf("Ingrese %d elementos del array:\n", len);
    for (i = 0; i < len; i++)
        scanf("%d", &arr[i]);

    printf("Ingrese la posicion del array a eliminar:\n");
    scanf("%d", &pos);

    i = pos - 1;

    while (i < len - 1)
    {
        arr[i] = arr[i + 1];
        i++;
    }
    len--;
    printf("Array despues de eliminar la posicion seleccionada\n");

    for (i = 0; i < len; i++)
        printf(" %d", arr[i]);
}

void sextoA()
{
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;
    printf("Ingrese el numero de filas (entre 1 y 100): ");
    scanf("%d", &r);
    printf("Ingrese el numero de columnas (entre 1 y 100): ");
    scanf("%d", &c);

    printf("\nIngrese los elementos de la primera matriz:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("Ingres el elemento a%d%d de la matriz: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    printf("Ingrese los elementos de la segunda matriz:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("Ingres el elemento b%d%d de la matriz: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }

    // Suma de matrices
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }

    // Impresion resultado
    printf("\nSuma de las 2 matrices: \n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("%d   ", sum[i][j]);
            if (j == c - 1)
            {
                printf("\n\n");
            }
        }
}

void sextoB()
{
    int m, n, c, d, first[10][10], second[10][10], difference[10][10];

    printf("Ingrese el numero de filas y columnas de la matriz \n");
    scanf("%d%d", &m, &n);
    printf("Ingrese los elementos de la primer matriz\n");

    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            scanf("%d", &first[c][d]);

    printf("Ingrese los elementos de la segunda matriz\n");

    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            scanf("%d", &second[c][d]);

    printf("Resta de Matrices:-\n");

    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            difference[c][d] = first[c][d] - second[c][d];
            printf("%d\t", difference[c][d]);
        }
        printf("\n");
    }
}

void sextoC()
{
#define SIZE 3
    int A[SIZE][SIZE];
    int num, row, col;

    printf("Ingrese los elementos para una matriz %dx%d: \n", SIZE, SIZE);
    for (row = 0; row < SIZE; row++)
    {
        for (col = 0; col < SIZE; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    printf("Ingrese un numero para multiplicar con la matriz A: ");
    scanf("%d", &num);

    for (row = 0; row < SIZE; row++)
    {
        for (col = 0; col < SIZE; col++)
        {
            A[row][col] = num * A[row][col];
        }
    }

    printf("\nResultado matriz \n");
    for (row = 0; row < SIZE; row++)
    {
        for (col = 0; col < SIZE; col++)
        {
            printf("%d ", A[row][col]);
        }
        printf("\n");
    }
}

void septimoA()
{
    char str[20];

    printf("Ingrese el String: ");
    scanf("%s", str);
    printf("%s\n", str);
    for (size_t i = 0; i < strlen(str); ++i)
    {
        printf("%c", tolower((unsigned char)str[i]));
    }
    printf("\n");
}

int checkpalindrome(char *s)
{
    static int i, c = 0;
    int n = strlen(s);
    if (i < n / 2)
    {
        if (s[i] == s[n - i - 1])
            c++;
        i++;
        checkpalindrome(s);
    }
    else
    {
        if (c == i)
            return 1;
        else
            return 0;
    }
}

void septimoB()
{
    char s[1000];

    printf("Ingrese un string: \n");
    scanf("%s", &s);

    if (checkpalindrome(s))
        printf("Es palindroma \n");
    else
        printf("No es palindroma \n");
}

void septimoC()
{
    char str1[20], str2[20];
    int len, len1, len2, i, j, found = 0, not_found = 0;
    printf("Ingrese el primer String: ");
    scanf("%s", str1);
    printf("Ingrese segundo String: ");
    scanf("%s", str2);
    len1 = strlen(str1);
    len2 = strlen(str2);
    if (len1 == len2)
    {
        len = len1;
        for (i = 0; i < len; i++)
        {
            found = 0;
            for (j = 0; j < len; j++)
            {
                if (str1[i] == str2[j])
                {
                    found = 1;
                    break;
                }
            }
            if (found == 0)
            {
                not_found = 1;
                break;
            }
        }
        if (not_found == 1)
            printf("Los Strings no son Anagrama\n");
        else
            printf("Los Strings son Anagrama\n");
    }
    else
        printf("\nAmbas cadenas deben contener el mismo número de caracteres para ser un anagrama.");
}

void octavoA(char c, char s[])
{
    int i, k = 0;

    for (i = 0; s[i]; i++)
    {
        if (s[i] == c)
        {
            k = 1;
            break;
        }
    }
    if (k)
        printf("Del caracter %c es la primera ocurrencia en la posición: %d \n", c, i);
    else
        printf("El caracter no está dentro de la cadena \n");
}

void octavoB(char c, char s[])
{
    int i, k = 0;

    for (i = strlen(s) - 1; i >= 0; i--)
    {
        if (s[i] == c)
        {
            k = 1;
            break;
        }
    }
    if (k)
        printf("Del caracter %c la última ocurrencia es en la posición: %d \n", c, i);
    else
        printf("El caracter no se encuentra en la cadena \n");
}

void octavoC(char c, char s[])
{
    int a = 0;
    for (int i = 0; s[i]; i++)
    {
        if (s[i] == c)
            a++;
    }
    printf("El caracter '%c' se encuentra : %d veces \n ", c, a);
}

void novenoA(double num)
{
    double cube = num * num * num;
    printf("El cubo del %f es: %f  \n", num, cube);
}

void novenoB(double radius)
{
    double PI = 3.14;
    double area, circumference, diameter;
    diameter = 2 * radius;
    circumference = 2 * PI * radius;
    area = PI * radius * radius;
    printf("El diametro del circulo para el radio %f es: %f \n", radius, diameter);
    printf("La circunferencia del circulo para el radio %f es: %f \n", radius, circumference);
    printf("El area del circulo para el radio %f es: %f \n", radius, area);
}

void novenoC(double num)
{
    int n = (int)num;
    if (n % 2 == 0)
        printf("El número ingresado %f es par \n", num);
    else
        printf("El número ingresado %f es impar \n", num);
}

void decimoA()
{
    int first, second, *p, *q, sum;

    printf("Ingrese dos números (int) para añadir \n");
    scanf("%d%d", &first, &second);

    p = &first;
    q = &second;

    sum = *p + *q;

    printf("la suma de los dos números usando punteros es = %d\n", sum);
}

void decimoB()
{
    int x, y, *a, *b, temp;

    printf("Ingrese el valor de x y y\n");
    scanf("%d%d", &x, &y);

    printf("Antes de cambiar \nx = %d\ny = %d\n", x, y);

    a = &x;
    b = &y;

    temp = *b;
    *b = *a;
    *a = temp;

    printf("Después de cambiar\nx = %d\ny = %d\n", x, y);
}

void decimoC()
{
    int arr[3];
    int *ptr = arr;

    printf("Ingrese los elementos del array:\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", ptr);
        ptr++;
    }

    ptr = arr;

    printf("Elementos en el array: ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d, ", *ptr);
        ptr++;
    }
}

void onceavoA()
{
    char data[500];

    FILE *fPtr;

    fPtr = fopen("file.txt", "w");

    if (fPtr == NULL)
    {
        printf("No fue posible crear el archivo.\n");
        exit(EXIT_FAILURE);
    }

    printf("Ingrese el contendido a almacenar en el archivo : \n");
    // fgets(data, 500, fPtr);
    scanf("%s", data);
    fputs(data, fPtr);

    fclose(fPtr);

    printf("Archivo creado y guardado con éxito. :) \n");
}

void onceavoB()
{
    FILE *fPtr;

    char ch;

    fPtr = fopen("file.txt", "r");

    if (fPtr == NULL)
    {
        printf("No fue posible abrir el archivo.\n");
        printf("Compruebe si el archivo existe y tiene privilegios de lectura.\n");
        exit(EXIT_FAILURE);
    }

    printf("Archivo abierto con éxito. Leer el contenido del archivo carácter a carácter. \n\n");
    printf("El contenido del archivo es: \n");
    do
    {
        ch = fgetc(fPtr);
        putchar(ch);

    } while (ch != EOF);
    printf("\n");

    fclose(fPtr);
}

void onceavoC()
{
    FILE *sourceFile;
    FILE *destFile;
    char ch;

    sourceFile = fopen("file1.txt", "r");
    destFile = fopen("file2.txt", "w");

    if (sourceFile == NULL || destFile == NULL)
    {
        printf("No fue posible abrir el archivo.\n");
        printf("Verifique si el archivo existe y tiene privilegios de lectura/escritura.\n");
        exit(EXIT_FAILURE);
    }

    ch = fgetc(sourceFile);
    while (ch != EOF)
    {
        printf("El caracter copiado es: %s\n", &ch);
        fputc(ch, destFile);
        ch = fgetc(sourceFile);
    }

    printf("\nArchivos compiados satisfactoriamente.\n");
    fclose(sourceFile);
    fclose(destFile);
}
void doceavoA()
{
    int array[100], n, c, d, swap;

    printf("Ingresar la cantidad de elementos 'Bubble Sort'\n");
    scanf("%d", &n);

    printf("Ingresar los %d números\n", n);

    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

    for (c = 0; c < n - 1; c++)
    {
        for (d = 0; d < n - c - 1; d++)
        {
            if (array[d] > array[d + 1])
            {
                swap = array[d];
                array[d] = array[d + 1];
                array[d + 1] = swap;
            }
        }
    }
    printf("Los números ordenados quedan así 'Bubble Sort':\n");
    for (c = 0; c < n; c++)
        printf("%d ", array[c]);

    printf("\n");
}

void doceavoB()
{
    int arr[30];
    int k, num;
    int i, j, tmp;

    printf("Ingrese la cantidad de elementos 'Shell Sort' : \n");
    scanf("%d ", &num);
    printf("Ingrese los %d numeros: \n", num);

    for (k = 0; k < num; k++)
        scanf("%d", &arr[k]);

    for (i = num / 2; i > 0; i = i / 2)
    {
        for (j = i; j < num; j++)
        {
            for (k = j - i; k >= 0; k = k - i)
            {
                if (arr[k + i] >= arr[k])
                    break;
                else
                {
                    tmp = arr[k];
                    arr[k] = arr[k + i];
                    arr[k + i] = tmp;
                }
            }
        }
    }
    printf(" El arreglo ordenado es 'Shell Sort': \n");
    for (k = 0; k < num; k++)
        printf("%d ", arr[k]);
    printf("\n");
}

void doceavoC()
{
    int a[100], n, i, j, position, swap;
    printf("Ingrese el número de elemetos 'Selection Sort' \n");
    scanf("%d", &n);
    printf("Ingrese los %d numeros \n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n - 1; i++)
    {
        position = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[position] > a[j])
                position = j;
        }
        if (position != i)
        {
            swap = a[i];
            a[i] = a[position];
            a[position] = swap;
        }
    }
    printf("Los elementos ordenados son 'Selectión Sort': \n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void treceavoA()
{
    int c, first, last, middle, n, search, array[100];

    printf("Ingrese el número de elementos 'Binary Search:': \n");
    scanf("%d", &n);

    printf("Ingrese los %d numeros: \n", n);

    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

    printf("Ingrese el valor a encontrar: \n");
    scanf("%d", &search);

    first = 0;
    last = n - 1;
    middle = (first + last) / 2;

    while (first <= last)
    {
        if (array[middle] < search)
            first = middle + 1;
        else if (array[middle] == search)
        {
            printf("%d Encontrado en la posición %d.\n", search, middle + 1);
            break;
        }
        else
            last = middle - 1;

        middle = (first + last) / 2;
    }
    if (first > last)
        printf("No encontrado %d no está en el arreglo.\n", search);
}

void treceavoB()
{
    int array[100], search, c, n;

    printf("Ingrese el número de elementos 'Linear Search':  \n");
    scanf("%d", &n);

    printf("Ingrese los %d números: \n", n);

    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

    printf("Ingrese el número a buscar: \n");
    scanf("%d", &search);

    for (c = 0; c < n; c++)
    {
        if (array[c] == search)
        {
            printf("%d está en la posición %d.\n", search, c + 1);
            break;
        }
    }
    if (c == n)
        printf("%d no se encuentra en el arreglo.\n", search);
}

int main()
{
    int opcion;
    char c;
    double value;
    char s[100] = "Universidad Sergio Arbolda - Arquitectura de Computadores";

    do
    {
        printf("\n   Arquitectura de Computadores -- Universidad Sergio Arboleda");
        printf("\n   Juan Márquez y Miguel Guerrero.");
        printf("\n   01. Simple C Questions.");
        printf("\n   02. If/Else Statement.");
        printf("\n   03. Loops.");
        printf("\n   04. Switch Case.");
        printf("\n   05. Array Questions.");
        printf("\n   06. Matrix Questions.");
        printf("\n   07. String Questions List.");
        printf("\n   08. String Questions: Level Up.");
        printf("\n   09. Function Questions.");
        printf("\n   10. Pointer Questions.");
        printf("\n   11. File Handling.");
        printf("\n   12. Sorting.");
        printf("\n   13. Searching.");
        printf("\n   14. Salir.");
        printf("\n\n   Introduzca opci%cn (1-14): ", 162);

        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            primeroA();
            primeroB();
            primeroC();
            break;
        case 2:
            segundoA();
            segundoB();
            segundoC();
            break;
        case 3:
            terceroA();
            terceroB();
            terceroC();
            break;
        case 4:
            cuartoA();
            cuartoB();
            cuartoC();
            break;
        case 5:
            quintoA();
            quintoB();
            quintoC();
            break;
        case 6:
            sextoA();
            sextoB();
            sextoC();
            break;
        case 7:
            septimoA();
            septimoB();
            septimoC();
            break;
        case 8:
            printf("Ingrese el caracter que desea buscar: \n");
            scanf("%s", &c);
            printf("La cadena precargada es: %s \n", s);
            printf("el carácter ingresado es: %c\n", c);

            octavoA(c, s);
            octavoB(c, s);
            octavoC(c, s);

            break;
        case 9:
            value = 0;
            printf(" Ingrese el valor con el que desea calcular los ejercicios para este item \n");
            scanf(" %lf", &value);
            novenoA(value);
            novenoB(value);
            novenoC(value);
            break;
        case 10:
            decimoA();
            decimoB();
            decimoC();
            break;
        case 11:
            onceavoA();
            onceavoB();
            onceavoC();
            break;
        case 12:
            doceavoA();
            doceavoB();
            doceavoC();
            break;
        case 13:
            treceavoA();
            treceavoB();
            break;
        }

    } while (opcion != 14);

    return 0;
}