#include <stdio.h>

int main(void) {

    int input;

    printf("음식 종류를 고르세요\n\n"); // 처음화면
    printf("양식을 원하시면 '1'\n");
    printf("중식을 원하시면 '2' \n");
    printf("일식을 원하시면 '3'\n");
    printf("디저트를 원하시면 '4'\n");
    printf("1~4까지 입력해주세요\n\n");
    scanf_s("%d", &input);

    switch (input) {

    case 1: // 양식 1 clear
        printf("가고 싶은 음식점을 선택해주세요\n\n");
        printf("1번. 로씨 \n");
        printf("2번. 성탄수제버거앤갈비 \n");
        scanf_s("%d", &input);

        switch (input) { // 한식 2 clear 

        case 1:
            printf("1번. 로씨\n\n\n");
            printf("위치: 충남 천안시 동남구 문암1길 69-3 에이스빌\n");
            printf("티본 스테이크 45000원\n");
            printf("로씨피자 23900원\n");
            printf("그외의 피자 19000~23000원\n");
            printf("파스타들 16000~18000원\n");
            printf("젤라또 10000~18000원\n");
            printf("라자뉴 18000원\n");
            printf("리조또 17000원\n");
            break;
        case 2:
            printf("2번. 성탄수제갈비\n\n\n");
            printf("위치: 충남 천안시 동남구 망향로 173\n");
            printf("치아비타 버거 5900~8900원\n");
            printf("라이스 버거 5900~8900원\n");
            printf("치아바타 샌드 버거 4900~6900원\n");
            printf("안창스테이크철판구이 12900~27900원\n");
            break;

        default:
            printf("잘못 입력하셨습니다.\n");
            break;
        }

        return 0;






    case 2: // 중식 1 clear




        printf("가게를 선택 해 주세요.\n\n");
        printf("1번. 짜요 \n");
        printf("2번. 수해복 마라탕 \n");
        scanf_s("%d", &input);

        switch (input) { //중식 2 clear
        case 1:
            printf("1번. 짜요\n\n\n");
            printf("위치: 충남 천안시 동남구 문암로 63 \n");
            printf("대표 메뉴: 짜장면(5,000원)\n");
            printf("짬뽕(6,000원)\n");
            printf("탕수육小(17,000원)\n");
            printf("탕수육中(20,000원)\n");
            printf("탕수육大(23,000원)\n");
            printf("특징: 음식이 생각보다 빨리 나오는 편이며 가성비 있게먹을거면 세트메뉴 추천!\n");
            break;
        case 2:
            printf("2번. 수해복 마라탕 \n\n\n");
            printf("위치:충남 천안시 동남구 문암로 69 1층 \n");
            printf("대표 메뉴: 마라탕(100g) 1600원\n");
            printf("마라상궈(100g) 3000원 \n");
            printf("특징: 순한맛, 보통맛, 매운맛으로 나뉘어 자신이 원하는 매운맛을 먹을 수 있다! \n");

            break;

        default:
            printf("잘못 입력하셨습니다.\n");
            break;
        }

        return 0;




    case 3: // 일식 1 clear

        printf("원하는 음식점 선택(번호 입력) \n\n");
        printf("1번. 오니기리와이 규동 \n");
        printf("2번. 자라쿠라멘 \n");
        printf("3번. 스시마당 \n");
        printf("원하는 번호 선택:\n");
        scanf_s("%d", &input);

        switch (input) { // 일식 2 clear
        case 1:
            printf("1번. 오니기리와이 규동\n\n\n");
            printf("주소:충남 천안시 동남구 문암로 76\n");
            printf("메뉴\n");
            printf("규동5900~8900(세트)\n");
            printf("가츠동 6500~8000(세트)\n");
            printf("돈가스 7000\n");
            break;
        case 2:
            printf("2번. 자라쿠 라멘\n\n\n");
            printf("주소:충남 천안시 동남구 문암로 83 오성빌딩 1층 \n");
            printf("메뉴\n");
            printf("자라쿠 정식(라멘+덮밥)8500\n");
            printf("라멘 6000~7000\n");
            printf("카레라이스 6000\n");
            break;
        case 3:
            printf("3번. 스시마당\n\n\n");
            printf("주소: 충남 천안시 동남구 천호지길 4 캠퍼스타운\n");
            printf("메뉴\n");
            printf("모듬초밥 (10pc)9000~11000\n");
            printf("세트메뉴8000~23000\n");
            printf("돈까스7000~8000\n");
            break;
        default:
            printf("잘못 입력하셨습니다.\n");

        }return 0;





    case 4: // 디저트 1 clear

        printf("가게를 선택 해 주세요.\n\n");
        printf("샐러핏 '1'입력\n");
        printf("공차 '2'입력\n");
        printf("아멜라스 '3'입력\n");
        printf("입력");
        scanf_s("%d", &input);

        switch (input) { // 디저트 2 clear
        case 1:
            printf("샐러핏\n\n\n");
            printf("위치:충남 천안시 동남구 문암로 43(도보 10분)\n");
            printf("대표 메뉴:에그샐러드(4,500원)\n");
            printf("닭가슴살샐러드(5,500원)\n");
            printf("쉬림프샐러드(6,500원)\n");
            break;
        case 2:
            printf("공차\n\n\n");
            printf("위치:충남 천안시 동남구 문암로 70(도보 9분)\n");
            printf("대표 메뉴\n");
            printf("-----------  M    L\n");
            printf("블랙밀크티 (4.0  5.1)\n");
            printf("타로밀크티 (4.0  5.1)\n");
            break;
        case 3:
            printf("오멜라스\n\n\n");
            printf("위치:충남 천안시 동남구 문암4길 34(도보 15분)\n");
            printf("대표메뉴\n");
            printf("-----------  H   C\n");
            printf("아메리카노 (2.8 3.3)\n");
            printf("바닐라라떼 (3.5 4.0)\n");
            break;
        default:
            printf("값을 잘못 입력하셨습니다.\n");
            break;
        }

        return 0;
    }




    return 0;
}





