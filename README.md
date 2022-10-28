# 42SeoulProjects

<img src="https://img.shields.io/badge/Language-C-blue"/>

## Libft

- C언어 라이브러리를 구현하는 프로젝트

    내장 함수를 직접 구현해 보는 프로젝트입니다. atoi, itoa, isdigit, isalpha와 같은 기초적인 함수부터, lstadd_back, lastadd_front, lstclear, lastdelone 과 같은 연결 리스트 함수를 STL 없이 직접 구현하였습니다. malloc(), delete()로 깊은 복사를 구현하며 valgrind 명령어를 통해 memeory leak을 탐지하였습니다.
<br></br>

## get_next_line

- 파일을 한 줄 읽어 리턴하는 함수를 구현하는 프로젝트

    파일 디스크립터를 입력 받아 라인 한 줄을 읽는 함수를 구현하는 프로젝트입니다. read() 함수를 통해 버퍼의 크기만큼 파일을 반복적으로 읽습니다. 버퍼에 ‘\n’가 있을 때 한 문장의 끝을 찾았다고 판단하여 ‘\n’ 이전까지의 문자열을 리턴하도록 구현하였습니다. 파일에서 읽혔으나 ‘\n’ 뒤에 있어 아직 리턴되지 않은 문자들을 저장해 놓아야 했고, static 배열을 활용하여 해당 이슈를 해결하였습니다.
<br></br>

## ft_printf
- stdio.h의 printf 함수를 구현하는 프로젝트

    문자열과 가변 인자를 입력받아 printf와 동일하게 동작하는 함수를 구현하는 프로젝트입니다. 가변 인자를 학습하고, 가변 인자 포인터를 이용하여 입력으로 들어오는 데이터 값이 문자열에 포맷팅 될 수 있도록 구현하였습니다. 프로젝트의 코드를 동료들과 리뷰하며 불필요하게 많은 함수를 작성했다는 사실을 알게 되었습니다. 더 나은 코드를 작성하고 설계하기 위해 구현 연습이 필요하다고 판단하였고, 이는 알고리즘 스터디에 참여하는 계기가 되었습니다. 
<br></br>

## cub3D
- 최초의 FPS 게임, Wolfenstein 3D의 게임 엔진을 구현하는 프로젝트

    MinilibX를 사용하여 윈도우를 생성하고, 사용자의 움직임에 따라 3D 화면을 렌더링 하는 프로젝트입니다. Raycasting 기법을 이용하여 2D의 map을 3D 그래픽으로 변환하였습니다. 플레이어의 현재 위치에서 시야 각도만큼 광선을 내보내고, 플레이어와 벽에 부딪힌 광선 사이의 거리를 계산하여 3D 벽의 크기를 결정하였습니다. 좌, 우, W, S, A, D 키를 입력받아 속도와 방향 속성(부호)를 변경하고, 사용자와 부딪힌 광선 사이의 거리가 짧을수록 벽의 크기를 크게 표현하여 원근감이 느껴지도록 하였습니다. 
    벡터를 이용하여 구현해야 했으나, 물리 지식이 부족하여 난항을 겪었습니다. 이가 없으면 잇몸으로, 모든 계산을 피타고라스 정리 a^2 + b^2 = c^2과 sin, cos, tan로 대체하여 보다 쉽게 구현하였습니다. 

    [자세한 README 확인하기](https://github.com/GyeongahNa/42SeoulProjects/tree/main/cub3D)

<br></br>

## libasm
- 어셈블리어로 함수를 작성하는 프로젝트

    어셈블리어로 간단한 함수를 구현하는 프로젝트입니다. 어셈블리어와 레지스터를 학습하고 read(), strcmp(), strcpy(), strdup(), strlen(), write() 함수를 구현하였습니다.