#include <stdio.h>

int main(void) {

    int input;

    printf("���� ������ ������\n\n"); // ó��ȭ��
    printf("����� ���Ͻø� '1'\n");
    printf("�߽��� ���Ͻø� '2' \n");
    printf("�Ͻ��� ���Ͻø� '3'\n");
    printf("����Ʈ�� ���Ͻø� '4'\n");
    printf("1~4���� �Է����ּ���\n\n");
    scanf_s("%d", &input);

    switch (input) {

    case 1: // ��� 1 clear
        printf("���� ���� �������� �������ּ���\n\n");
        printf("1��. �ξ� \n");
        printf("2��. ��ź�������žذ��� \n");
        scanf_s("%d", &input);

        switch (input) { // �ѽ� 2 clear 

        case 1:
            printf("1��. �ξ�\n\n\n");
            printf("��ġ: �泲 õ�Ƚ� ������ ����1�� 69-3 ���̽���\n");
            printf("Ƽ�� ������ũ 45000��\n");
            printf("�ξ����� 23900��\n");
            printf("�׿��� ���� 19000~23000��\n");
            printf("�Ľ�Ÿ�� 16000~18000��\n");
            printf("����� 10000~18000��\n");
            printf("���ڴ� 18000��\n");
            printf("������ 17000��\n");
            break;
        case 2:
            printf("2��. ��ź��������\n\n\n");
            printf("��ġ: �泲 õ�Ƚ� ������ ����� 173\n");
            printf("ġ�ƺ�Ÿ ���� 5900~8900��\n");
            printf("���̽� ���� 5900~8900��\n");
            printf("ġ�ƹ�Ÿ ���� ���� 4900~6900��\n");
            printf("��â������ũö�Ǳ��� 12900~27900��\n");
            break;

        default:
            printf("�߸� �Է��ϼ̽��ϴ�.\n");
            break;
        }

        return 0;






    case 2: // �߽� 1 clear




        printf("���Ը� ���� �� �ּ���.\n\n");
        printf("1��. ¥�� \n");
        printf("2��. ���غ� ������ \n");
        scanf_s("%d", &input);

        switch (input) { //�߽� 2 clear
        case 1:
            printf("1��. ¥��\n\n\n");
            printf("��ġ: �泲 õ�Ƚ� ������ ���Ϸ� 63 \n");
            printf("��ǥ �޴�: ¥���(5,000��)\n");
            printf("«��(6,000��)\n");
            printf("�������(17,000��)\n");
            printf("��������(20,000��)\n");
            printf("��������(23,000��)\n");
            printf("Ư¡: ������ �������� ���� ������ ���̸� ������ �ְԸ����Ÿ� ��Ʈ�޴� ��õ!\n");
            break;
        case 2:
            printf("2��. ���غ� ������ \n\n\n");
            printf("��ġ:�泲 õ�Ƚ� ������ ���Ϸ� 69 1�� \n");
            printf("��ǥ �޴�: ������(100g) 1600��\n");
            printf("������(100g) 3000�� \n");
            printf("Ư¡: ���Ѹ�, �����, �ſ������ ������ �ڽ��� ���ϴ� �ſ���� ���� �� �ִ�! \n");

            break;

        default:
            printf("�߸� �Է��ϼ̽��ϴ�.\n");
            break;
        }

        return 0;




    case 3: // �Ͻ� 1 clear

        printf("���ϴ� ������ ����(��ȣ �Է�) \n\n");
        printf("1��. ���ϱ⸮���� �Ե� \n");
        printf("2��. �ڶ����� \n");
        printf("3��. ���ø��� \n");
        printf("���ϴ� ��ȣ ����:\n");
        scanf_s("%d", &input);

        switch (input) { // �Ͻ� 2 clear
        case 1:
            printf("1��. ���ϱ⸮���� �Ե�\n\n\n");
            printf("�ּ�:�泲 õ�Ƚ� ������ ���Ϸ� 76\n");
            printf("�޴�\n");
            printf("�Ե�5900~8900(��Ʈ)\n");
            printf("������ 6500~8000(��Ʈ)\n");
            printf("������ 7000\n");
            break;
        case 2:
            printf("2��. �ڶ��� ���\n\n\n");
            printf("�ּ�:�泲 õ�Ƚ� ������ ���Ϸ� 83 �������� 1�� \n");
            printf("�޴�\n");
            printf("�ڶ��� ����(���+����)8500\n");
            printf("��� 6000~7000\n");
            printf("ī�����̽� 6000\n");
            break;
        case 3:
            printf("3��. ���ø���\n\n\n");
            printf("�ּ�: �泲 õ�Ƚ� ������ õȣ���� 4 ķ�۽�Ÿ��\n");
            printf("�޴�\n");
            printf("����ʹ� (10pc)9000~11000\n");
            printf("��Ʈ�޴�8000~23000\n");
            printf("���7000~8000\n");
            break;
        default:
            printf("�߸� �Է��ϼ̽��ϴ�.\n");

        }return 0;





    case 4: // ����Ʈ 1 clear

        printf("���Ը� ���� �� �ּ���.\n\n");
        printf("������ '1'�Է�\n");
        printf("���� '2'�Է�\n");
        printf("�Ƹ�� '3'�Է�\n");
        printf("�Է�");
        scanf_s("%d", &input);

        switch (input) { // ����Ʈ 2 clear
        case 1:
            printf("������\n\n\n");
            printf("��ġ:�泲 õ�Ƚ� ������ ���Ϸ� 43(���� 10��)\n");
            printf("��ǥ �޴�:���׻�����(4,500��)\n");
            printf("�߰����������(5,500��)\n");
            printf("������������(6,500��)\n");
            break;
        case 2:
            printf("����\n\n\n");
            printf("��ġ:�泲 õ�Ƚ� ������ ���Ϸ� 70(���� 9��)\n");
            printf("��ǥ �޴�\n");
            printf("-----------  M    L\n");
            printf("����ũƼ (4.0  5.1)\n");
            printf("Ÿ�ι�ũƼ (4.0  5.1)\n");
            break;
        case 3:
            printf("�����\n\n\n");
            printf("��ġ:�泲 õ�Ƚ� ������ ����4�� 34(���� 15��)\n");
            printf("��ǥ�޴�\n");
            printf("-----------  H   C\n");
            printf("�Ƹ޸�ī�� (2.8 3.3)\n");
            printf("�ٴҶ�� (3.5 4.0)\n");
            break;
        default:
            printf("���� �߸� �Է��ϼ̽��ϴ�.\n");
            break;
        }

        return 0;
    }




    return 0;
}





