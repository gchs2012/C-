#include<stdio.h>
#include <unistd.h>

/* 测试代码 0 */
int code_0(void) 
{ 
    int c = 5; 

    switch(c)
    {
    case 0 ... 10:
        printf("0-->10\n");
        break;
    case 11 ... 20:
        printf("11-->20\n");
        break;
    default:
        printf("other\n");
    }

    return 0;
}

/* 测试代码 1 */
int code_1(void)
{
    printf("%m\n");
    return 0;
}

/* 测试代码 2 */
int code_2(void)
{
    int i = 1;

    printf("%zu\n", sizeof(i++));
    printf("%zu\n", sizeof(++i));
    printf("%d\n", i);

    return 0;
}

/* 测试代码 3 */
int code_3(void)
{
    int i = 0;

    while (i < 3)
    {
        fprintf(stdout, "%d", i++);
        fprintf(stderr, "%d", i++);
    }   

    return 0;
}

/* 测试代码 4 */
int code_4(void)
{
    int a = 10;

    switch(a) 
    {
        int b = 20;
        case 10:
            printf("%d\n", a + b);
            break;
        default:
            printf("%d\n", a + b);
            break;
    }

    return 0;
}

/* 测试代码 5 */
int code_5(void)
{
    printf("%c\n", 4["hello code"]); 

    return 0;
}

/* 测试代码 6 */
int code_6(void)
{
    char arr[] = {'h','e','l','l','o'};
    printf("%s\n", arr);

    return 0;
}

/* 测试代码 7 */
int code_7(void)
{
    int i = -1;
    int arr[] = {5, 4, 3, 2, 1};

    for(i = -1; i < sizeof(arr)/sizeof(int) - 1; i++)
    {
        printf("%d\n", arr[i+1]);
    } 
    printf("end\n");

    return 0;
}

/* 测试代码 8 */
code_8_test()
{
    long b = 12345678987654321;
    return b;
}

int code_8(void)
{
     long a = code_8_test();
     printf("%ld\n", a);

     return 0;
}

/* 测试代码 9 */
int code_9(void)
{
    float a = 3;
    int b = 2;

    printf("%d\n", a/2);

    return 0;
}


#define CODE_FUNC_NUM  10
#define CODE_FUNC_X(x) code_##x
typedef int (*code_func_pf)(void);
code_func_pf CODE_FUNC[CODE_FUNC_NUM] = {
    CODE_FUNC_X(0),
    CODE_FUNC_X(1),
    CODE_FUNC_X(2),
    CODE_FUNC_X(3),
    CODE_FUNC_X(4),
    CODE_FUNC_X(5),
    CODE_FUNC_X(6),
    CODE_FUNC_X(7),
    CODE_FUNC_X(8),
    CODE_FUNC_X(9)
};

int main(int argc, char const *argv[])
{
    int i;

    for (i = 0; i < CODE_FUNC_NUM; ++i)
    {
        printf("code_%d:\n", i);
        CODE_FUNC[i]();
        printf("\n");
    }

    return 0;
}


#include "foo/public/fooserver.h" // 优先位置

#include <sys/types.h>
#include <unistd.h>

#include <hash_map>
#include <vector>

#include "base/basictypes.h"
#include "base/commandlineflags.h"
#include "foo/public/bar.h"
