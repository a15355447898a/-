#include <stdio.h>
#include <math.h>
#include <ctype.h>
#define �ж��Ƿ�ΪСд��ĸ islower//���򷵻ط� 0 ֵ�����򷵻� 0
#define �ж��Ƿ�Ϊ��д��ĸ isupper//���򷵻ط� 0 ֵ�����򷵻� 0
#define �˷����� pow//pow(x,y) ���� x �� y ����
int �ж���ĸ��λ��(char X)//�ж���ĸ��λ��
{
    int Y = 0;
    switch (X)
    {
    case 'A':Y = 1; break;
    case 'a':Y = 1; break;
    case 'B':Y = 2; break;
    case 'b':Y = 2; break;
    case 'C':Y = 3; break;
    case 'c':Y = 3; break;
    case 'D':Y = 4; break;
    case 'd':Y = 4; break;
    case 'E':Y = 5; break;
    case 'e':Y = 5; break;
    case 'F':Y = 6; break;
    case 'f':Y = 6; break;
    case 'G':Y = 7; break;
    case 'g':Y = 7; break;
    case 'H':Y = 8; break;
    case 'h':Y = 8; break;
    case 'I':Y = 9; break;
    case 'i':Y = 9; break;
    case 'J':Y = 10; break;
    case 'j':Y = 10; break;
    case 'K':Y = 11; break;
    case 'k':Y = 11; break;
    case 'L':Y = 12; break;
    case 'l':Y = 12; break;
    case 'M':Y = 13; break;
    case 'm':Y = 13; break;
    case 'N':Y = 14; break;
    case 'n':Y = 14; break;
    case 'O':Y = 15; break;
    case 'o':Y = 15; break;
    case 'P':Y = 16; break;
    case 'p':Y = 16; break;
    case 'Q':Y = 17; break;
    case 'q':Y = 17; break;
    case 'R':Y = 18; break;
    case 'r':Y = 18; break;
    case 'S':Y = 19; break;
    case 's':Y = 19; break;
    case 'T':Y = 20; break;
    case 't':Y = 20; break;
    case 'U':Y = 21; break;
    case 'u':Y = 21; break;
    case 'V':Y = 22; break;
    case 'v':Y = 22; break;
    case 'W':Y = 23; break;
    case 'w':Y = 23; break;
    case 'X':Y = 24; break;
    case 'x':Y = 24; break;
    case 'Y':Y = 25; break;
    case 'y':Y = 25; break;
    case 'Z':Y = 26; break;
    case 'z':Y = 26; break;
    }
    return Y;
}
void �ж�����ĳɷ�(char a[][10])//�ж�����ĳɷ�
{
    int b = 0;
    while (a[0][b] != '\0')
    {
        if ((a[0][b] >= 'A' && a[0][b] <= 'Z') || (a[0][b] >= 'a' && a[0][b] <= 'z'))
        {
            a[1][0]++;//��ĸ
        }
        else if (a[0][b] >= '0' && a[0][b] <= '9')
        {
            a[1][1]++;//����
        }
        else
        {
            a[1][2]++;//����
        }
        b++;
    }
}
int main()
{
    char ����ĳɷ�[2][10] = { 0, 0 };//����ĳɷ�
    /*
     ���ֺ���ĸ�Ļ��
     ��ĸ�����������ֵ�����������������
     */
    int ���ֵ�λ�� = 0;//���ֵ�λ��
    char ������ֵ�����[20] = { 0 };//������ֵ�����
    int ���յ������������[20] = { 0 };//���յ������������
    int �ж����ֵ�ѭ�� = 0;//�ж����ֵ�ѭ��
    int �ж���ĸ��ѭ��_1 = 0;//�ж���ĸ��ѭ��_1
    int �ж���ĸ��ѭ��_2 = 0;//�ж���ĸ��ѭ��_2
    int ת�������õ��� = 0;//ת�������õ���
    char �����ĸ������[20] = { 0 };//�����ĸ������
    gets_s(����ĳɷ�[0], 10);
    �ж�����ĳɷ�(����ĳɷ�);
    printf("����������ַ����У�\n");
    int ��ĸ������ = (int)����ĳɷ�[1][0];//��ĸ������
    printf("    ��ĸ��������%d \n", ��ĸ������);
    int ���ֵ����� = (int)����ĳɷ�[1][1];//���ֵ�����
    printf("    ���ֵ�������%d \n", ���ֵ�����);
    if (����ĳɷ�[1][2] != 0)
    {
        printf("�����������������ģ�\n");
    }
    else
    {
        for (int b = 0; ����ĳɷ�[0][b] != '\0'; b++)
        {
            if ((����ĳɷ�[0][b] >= 'A' && ����ĳɷ�[0][b] <= 'Z') || (����ĳɷ�[0][b] >= 'a' && ����ĳɷ�[0][b] <= 'z'))//��ĸ
            {
                �ж���ĸ��ѭ��_1 = b;
                while (�ж��Ƿ�ΪСд��ĸ(����ĳɷ�[0][�ж���ĸ��ѭ��_1]) == 0 || �ж��Ƿ�Ϊ��д��ĸ(����ĳɷ�[0][�ж���ĸ��ѭ��_1]) == 0)//ѭ����������ĸ
                {
                    �ж���ĸ��ѭ��_1++;
                    ת�������õ���++;
                }
                if (�ж���ĸ��ѭ��_2 == 0)
                {
                    �����ĸ������[b] = �ж���ĸ��λ��(����ĳɷ�[0][b]) * (int)�˷�����(26, ת�������õ��� - 1);
                    �ж���ĸ��ѭ��_2 = 1;
                }
                else
                {
                    �����ĸ������[b] = �����ĸ������[b] + �ж���ĸ��λ��(����ĳɷ�[0][b]) * (int)�˷�����(26, ת�������õ��� - 1);
                }
                ת�������õ��� = 0;
                ���ֵ�λ��++;
                �ж����ֵ�ѭ�� = 0;
            }
            else if (����ĳɷ�[0][b]>= '0' && ����ĳɷ�[0][b] <= '9')//����
            {
                if (�ж����ֵ�ѭ�� == 0)
                {
                    ������ֵ�����[���ֵ�λ��] = ����ĳɷ�[0][b];
                    �ж����ֵ�ѭ�� = 1;
                }
                else
                {
                    ������ֵ�����[���ֵ�λ��] = ������ֵ�����[���ֵ�λ��] * 10 + ����ĳɷ�[0][b];
                }
                �ж���ĸ��ѭ��_2 = 0;
            }
            else
            {
                printf("����\n");
                ���ֵ�λ��++;
                �ж����ֵ�ѭ�� = 0;
                �ж���ĸ��ѭ��_2 = 0;
            }
        }
        for (int a = 0; ������ֵ�����[a] != '\0'; a++)//char����ת����int����
        {
            ���յ������������[a] = (int)������ֵ�����[a] - 48;
        }
        printf("    ��ĸΪ��");
        for (int c = 0; �����ĸ������[c] != '\0'; c++)
        {
            printf("%c",�����ĸ������[c]);
        }
        printf("\n");
        printf("    ����Ϊ��");
        for (int d = 0; ������ֵ�����[d] != '\0'; d++)
        {
            printf("%d", (int)������ֵ�����[d]);
        }
    }
    return 0;
}