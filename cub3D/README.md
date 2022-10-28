# cub3D
> 최초의 FPS 게임, Wolfenstein 3D 의 게임 엔진을 구현해보는 프로젝트<br>
> 간단한 윈도우를 생성하고 이벤트를 처리할 수 있는 MiniLibx와 2D map을 3D로 구현하는 raycasting 기법을 활용
<br>

## Input
<br>

- make 명령어를 통해 만들어진 `./cub3d.out`에 `.cub` 확장자의 지도 파일을 입력

  ```
  ./cub3d.out map.cub
  ```

- <b>map.cub</b>

  - 2차원의 지도(그리드)를 포함
  - map에서 1은 벽을, 0은 player가 지나다닐 수 있는 공간, 2는 Sprite(item)을 의미
  - R은 윈도우의 가로, 세로 크기를 나타냄
  - NO(북), SO(남), WE(서), EA(동) 방향의 벽에 씌워질 이미지와, S(Sprite)를 나타낼 이미지의 정보가 포함됨
  - F는 Floor, C는 Ceiling의 색상을 의미
  <br>

   ```
    R 1920 1080
    NO ./path_to_the_north_texture 
    SO ./path_to_the_south_texture
    WE ./path_to_the_west_texture
    EA ./path_to_the_east_texture
    S ./path_to_the_sprite_texture
    F 220,100,0
    C 225,30,0
            1111111111111111111111111
            1000000000110000000000001
            1011000001110000002000001
            1001000000000000000000001
    111111111011000001110000000000001
    100000000011000001110111111111111
    11110111111111011100000010001
    11110111111111011101010010001
    11000000110101011100000010001
    10002000000000001100000010001
    10000000000000001101010010001
    11000001110101011111011110N0111
    11110111 1110101 101111010001
    11111111 1111111 111111111111
    ```
<br>

## Key
<br>

- ➡️ , ⬅️ : 각각 플레이어가 바라보는 방향을 오른쪽과 왼쪽으로 조정
- <b>W, S, A, D</b> : 위, 아래, 좌, 우 로 플레이어 이동
- <b>ESC</b> : 게임 종료
- 물체에 가까이 갈 때는 밝게, 물체로 부터 멀어질 때는 어둡게 보이도록 명암 조정
<br>

## Video
<br>

Raycasting           |  Rendering & adding sprite
:-------------------------:|:-------------------------:
<img width="500" height="300" src="https://user-images.githubusercontent.com/60082435/141607520-d50f8bfd-5b59-44be-b0a2-834cdedd9fe6.gif">  |  <img width="500" height="300" src="https://user-images.githubusercontent.com/60082435/141607515-963d5d74-a86e-4697-a27d-ca231ab50c1e.gif">

