# lab11[환경 설정]

1. github.com에 본인 github ID로 로그인하세요. 

2. 본인의 과제4 repository [https://github.com/cppclass-2026-37275-team/cppclass-2026-37275-03-assignment4-본인githubID(username)]에 가서 클래스1.h 파일을  다운로드 합니다.

3. 🟩[New] repository를 만든 후 우측상단 Add file -> Upload files로 다운로드 받은 클래스1.h 파일을 Drag&Drop한 후 🟩[Commit changes...]를 누릅니다. 

4. 오른쪽 상단의 🟩[Code] -> 🟩[Codespaces]를 눌러 💻코딩 환경을 만드세요.

5. 탐색기에서 새 파일을 만들고 파일이름은 main.cpp로 하세요. 

6. [실습11] 내용을 ⌨️코딩, 🛠️컴파일 및 ▶️실행해 보세요.



[컴파일 및 실행 방법]

-⌨️ 📟터미널에서 아래 명령어로 컴파일하고 실행해보세요.

g++ main.cpp -o main && ./main

📊동적 메모리 누수 확인을 포함하여 컴파일 및 실행: AddressSanitizer (ASan)

g++ -fsanitize=address -g main.cpp -o main && ./main



[실습11]

1. 본인이름학번의 네임스페이스

-본인이름학번 네임스페이스 예: 이름이 김프로이고 학번이 3727500일 경우 KimPro3727500

using 지시자는 cpp파일에서는 영역 { block } 안에서 사용, 헤더파일엔 using 지시자는 사용하지 않고 네임스페이스 지정자를 사용합니다.

-using 지시자 예: { using namespace std; cout << "Enter your id: "; }

-네임스페이스 지정자 예: std::cout << "Enter your id: ";



2. 클래스1.h: 지난 실습에서 사용한 클래스에 다음을 변경 

-input: 매개변수를 std::istream&로, 기본값은 std::cin으로

-입력연산자>>: input함수를 이용

-print: 매개변수를 std::ostream&로, 기본값은 std::cout으로, 공백채움문자설정과 출력폭설정으로 변경하기

-출력연산자<<: print함수를 이용



3. 클래스1Data.txt: 클래스1의 입력연산자에서 멤버데이터를 읽는 순서대로 데이터를 여러개 넣어 텍스트파일을 만듭니다.



4. main.cpp: 테스트

본인이름학번의 네임스페이스안에 readWrite클래스1DataFile 함수와 parsing클래스1 함수를 정의하세요.

 

-readWrite클래스1DataFile 함수

리턴은 없고, 매개변수는 std::ifstream&형과 std::ofstream&형 2개입니다. 

클래스1형 std::vector를 선언합니다. 

입력파일스트림객체에서 데이터를 파일 끝까지 읽어서 클래스1형 std::vector에 값을 넣습니다. (push_back 이용) 이때, std::cout.rdbuf()함수를 이용해 표준스트림으로 값을 읽을때 "Enter ... "등을 출력되지 않게 합니다.  

출력파일스트림객체에 클래스형 std::vector를 출력합니다. 



-main

입력파일스트림객체를 선언하고 3의 텍스트파일을 열고 파일이 잘 열렸는지 확인합니다. 

출력파일스트림객체를 선언하고 파일명을 표준스트림으로 입력받고, 파일이 잘 열리는지 확인합니다. 

readWrite클래스1DataFile 함수에 인자로 입력파일스트림객체와 출력파일스트림객체를 넣고 호출합니다.

입출력파일스트림객체와 파일의 연결을 끊어줍니다 (파일을 닫아줍니다). 



[커밋 및 푸시]

-🖱🔀[소스제어]에 가서 변경 내용을 적고 커밋 및 푸시하세요.

(변경 내용을 적지 않으면 커밋이 되지 않으니 꼭 변경 내용을 적으세요!)

(📸 Commit: 현재 전체 상태를 기록, ⬆️ Push: 서버에 올리기)

-⌨️git 명령어를 이용한 커밋 및 푸시 방법

📟터미널에서 git add . && git commit -m "message" && git push

"message"는 커밋 내용 (예: ✅과제완료, 🐛수정내용, ✨추가, 🔥삭제, 🚀제출 등등)

-📦github에서 직접 커밋하는 방법]🟩[Codespaces]에서 ✅[Commit & Push]가 안 될 경우, 직접 📦github repository의 main.cpp에서 코드를 ✏️편집한 후 🟩[Commit changes...]하세요.

-💥 github repository에서 codespace를 만들어서 로컬에서 작업 후, 커밋&푸시하지 않은 상태에서 github repository에서 직접 commit하여 브랜치가 갈라질 경우 (diverged)

git add . && git commit -m "local changes": 로컬 변경 사항 커밋

git pull --rebase: 원격 커밋 위에 로컬 커밋

git add . && git rebase --continue: 충돌 발생 시 재배치

git push

