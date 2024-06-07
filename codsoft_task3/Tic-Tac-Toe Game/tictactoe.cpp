#include <windows.h>
#include <iostream>

using namespace std;

char GameBoard[] = {'a','b','c','d','e','f','g','h','i'};
char token = 'X';
char winner = 'L';

#define tic1 1
#define tic2 2
#define tic3 3
#define tic4 4
#define tic5 5
#define tic6 6
#define tic7 7
#define tic8 8
#define tic9 9
#define playAgain 10
#define newGame 11
#define quitGame 12


HWND hwnd, t1, t2, t3, t4, t5, t6, t7, t8, t9;
HWND playAgainBtn, newGameBtn, quitGameBtn;
HWND headingText; 


LRESULT CALLBACK WindowBuilder(HWND, UINT, WPARAM, LPARAM);


int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR args, int ncmdshow)
{
    
    WNDCLASSW wc = {0};
    wc.hbrBackground = (HBRUSH)COLOR_WINDOW;
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hInstance = hInst;
    wc.lpszClassName = L"myWindowClass";
    wc.lpfnWndProc = WindowBuilder;

    
    if (!RegisterClassW(&wc))
        return -1;

    
    CreateWindowW(L"myWindowClass", L"Tic-Tac-Toe", WS_OVERLAPPEDWINDOW | WS_VISIBLE, 100, 100, 520, 620, NULL, NULL, NULL, NULL);

    
    MSG msg = {0};

    
    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return msg.wParam;
}


void ResetGame(HWND hWnd)
{
    
    for (int i = 0; i < 9; ++i)
        GameBoard[i] = 'a' + i;
    token = 'X';
    winner = 'L';

    
    DestroyWindow(t1);
    DestroyWindow(t2);
    DestroyWindow(t3);
    DestroyWindow(t4);
    DestroyWindow(t5);
    DestroyWindow(t6);
    DestroyWindow(t7);
    DestroyWindow(t8);
    DestroyWindow(t9);

    t1 = CreateWindowW(L"Button", L"", WS_VISIBLE | WS_CHILD, 100, 100, 100, 100, hWnd, (HMENU)tic1, NULL, NULL);
    t2 = CreateWindowW(L"Button", L"", WS_VISIBLE | WS_CHILD, 200, 100, 100, 100, hWnd, (HMENU)tic2, NULL, NULL);
    t3 = CreateWindowW(L"Button", L"", WS_VISIBLE | WS_CHILD, 300, 100, 100, 100, hWnd, (HMENU)tic3, NULL, NULL);
    t4 = CreateWindowW(L"Button", L"", WS_VISIBLE | WS_CHILD, 100, 200, 100, 100, hWnd, (HMENU)tic4, NULL, NULL);
    t5 = CreateWindowW(L"Button", L"", WS_VISIBLE | WS_CHILD, 200, 200, 100, 100, hWnd, (HMENU)tic5, NULL, NULL);
    t6 = CreateWindowW(L"Button", L"", WS_VISIBLE | WS_CHILD, 300, 200, 100, 100, hWnd, (HMENU)tic6, NULL, NULL);
    t7 = CreateWindowW(L"Button", L"", WS_VISIBLE | WS_CHILD, 100, 300, 100, 100, hWnd, (HMENU)tic7, NULL, NULL);
    t8 = CreateWindowW(L"Button", L"", WS_VISIBLE | WS_CHILD, 200, 300, 100, 100, hWnd, (HMENU)tic8, NULL, NULL);
    t9 = CreateWindowW(L"Button", L"", WS_VISIBLE | WS_CHILD, 300, 300, 100, 100, hWnd, (HMENU)tic9, NULL, NULL);
}


LRESULT CALLBACK WindowBuilder(HWND hWnd, UINT msg, WPARAM wp, LPARAM lp)
{
    switch (msg)
    {
        
        case WM_DESTROY:
            PostQuitMessage(0);
            break;
        default:
            return DefWindowProcW(hWnd, msg, wp, lp);

        
        case WM_CREATE:
        {
            
            headingText = CreateWindowW(L"Static", L"Tic-Tac-Toe Game", WS_VISIBLE | WS_CHILD | WS_BORDER | SS_CENTER, 100, 50, 300, 50, hWnd, NULL, NULL, NULL);
            
            t1 = CreateWindowW(L"Button", L"", WS_VISIBLE | WS_CHILD, 100, 100, 100, 100, hWnd, (HMENU)tic1, NULL, NULL);
            t2 = CreateWindowW(L"Button", L"", WS_VISIBLE | WS_CHILD, 200, 100, 100, 100, hWnd, (HMENU)tic2, NULL, NULL);
            t3 = CreateWindowW(L"Button", L"", WS_VISIBLE | WS_CHILD, 300, 100, 100, 100, hWnd, (HMENU)tic3, NULL, NULL);
            t4 = CreateWindowW(L"Button", L"", WS_VISIBLE | WS_CHILD, 100, 200, 100, 100, hWnd, (HMENU)tic4, NULL, NULL);
            t5 = CreateWindowW(L"Button", L"", WS_VISIBLE | WS_CHILD, 200, 200, 100, 100, hWnd, (HMENU)tic5, NULL, NULL);
            t6 = CreateWindowW(L"Button", L"", WS_VISIBLE | WS_CHILD, 300, 200, 100, 100, hWnd, (HMENU)tic6, NULL, NULL);
            t7 = CreateWindowW(L"Button", L"", WS_VISIBLE | WS_CHILD, 100, 300, 100, 100, hWnd, (HMENU)tic7, NULL, NULL);
            t8 = CreateWindowW(L"Button", L"", WS_VISIBLE | WS_CHILD, 200, 300, 100, 100, hWnd, (HMENU)tic8, NULL, NULL);
            t9 = CreateWindowW(L"Button", L"", WS_VISIBLE | WS_CHILD, 300, 300, 100, 100, hWnd, (HMENU)tic9, NULL, NULL);

            
            playAgainBtn = CreateWindowW(L"Button", L"Play Again", WS_VISIBLE | WS_CHILD, 100, 450, 100, 50, hWnd, (HMENU)playAgain, NULL, NULL);
            newGameBtn = CreateWindowW(L"Button", L"New Game", WS_VISIBLE | WS_CHILD, 200, 450, 100, 50, hWnd, (HMENU)newGame, NULL, NULL);
            quitGameBtn = CreateWindowW(L"Button", L"Quit Game", WS_VISIBLE | WS_CHILD, 300, 450, 100, 50, hWnd, (HMENU)quitGame, NULL, NULL);

            break;
        }

        
        case WM_COMMAND:
        {
            
            if (LOWORD(wp) == playAgain)
            {
                ResetGame(hWnd);
                return 0;
            }

           
            if (LOWORD(wp) == newGame)
            {
                ResetGame(hWnd);
                return 0;
            }

           
            if (LOWORD(wp) == quitGame)
            {
                PostQuitMessage(0);
                return 0;
            }

           
            if (token == 'X')
            {
                if (LOWORD(wp) == tic1 && GameBoard[0] != 'X' && GameBoard[0] != '0')
                {
                    GameBoard[0] = 'X';
                    token = '0';
                    DestroyWindow(t1);
                    t1 = CreateWindowW(L"Button", L"X", WS_VISIBLE | WS_CHILD, 100, 100, 100, 100, hWnd, (HMENU)tic1, NULL, NULL);
                }
                else if (LOWORD(wp) == tic2 && GameBoard[1] != 'X' && GameBoard[1] != '0')
                {
                    GameBoard[1] = 'X';
                    token = '0';
                    DestroyWindow(t2);
                    t2 = CreateWindowW(L"Button", L"X", WS_VISIBLE | WS_CHILD, 200, 100, 100, 100, hWnd, (HMENU)tic2, NULL, NULL);
                }
                else if (LOWORD(wp) == tic3 && GameBoard[2] != 'X' && GameBoard[2] != '0')
                {
                    GameBoard[2] = 'X';
                    token = '0';
                    DestroyWindow(t3);
                    t3 = CreateWindowW(L"Button", L"X", WS_VISIBLE | WS_CHILD, 300, 100, 100, 100, hWnd, (HMENU)tic3, NULL, NULL);
                }
                else if (LOWORD(wp) == tic4 && GameBoard[3] != 'X' && GameBoard[3] != '0')
                {
                    GameBoard[3] = 'X';
                    token = '0';
                    DestroyWindow(t4);
                    t4 = CreateWindowW(L"Button", L"X", WS_VISIBLE | WS_CHILD, 100, 200, 100, 100, hWnd, (HMENU)tic4, NULL, NULL);
                }
                else if (LOWORD(wp) == tic5 && GameBoard[4] != 'X' && GameBoard[4] != '0')
                {
                    GameBoard[4] = 'X';
                    token = '0';
                    DestroyWindow(t5);
                    t5 = CreateWindowW(L"Button", L"X", WS_VISIBLE | WS_CHILD, 200, 200, 100, 100, hWnd, (HMENU)tic5, NULL, NULL);
                }
                else if (LOWORD(wp) == tic6 && GameBoard[5] != 'X' && GameBoard[5] != '0')
                {
                    GameBoard[5] = 'X';
                    token = '0';
                    DestroyWindow(t6);
                    t6 = CreateWindowW(L"Button", L"X", WS_VISIBLE | WS_CHILD, 300, 200, 100, 100, hWnd, (HMENU)tic6, NULL, NULL);
                }
                else if (LOWORD(wp) == tic7 && GameBoard[6] != 'X' && GameBoard[6] != '0')
                {
                    GameBoard[6] = 'X';
                    token = '0';
                    DestroyWindow(t7);
                    t7 = CreateWindowW(L"Button", L"X", WS_VISIBLE | WS_CHILD, 100, 300, 100, 100, hWnd, (HMENU)tic7, NULL, NULL);
                }
                else if (LOWORD(wp) == tic8 && GameBoard[7] != 'X' && GameBoard[7] != '0')
                {
                    GameBoard[7] = 'X';
                    token = '0';
                    DestroyWindow(t8);
                    t8 = CreateWindowW(L"Button", L"X", WS_VISIBLE | WS_CHILD, 200, 300, 100, 100, hWnd, (HMENU)tic8, NULL, NULL);
                }
                else if (LOWORD(wp) == tic9 && GameBoard[8] != 'X' && GameBoard[8] != '0')
                {
                    GameBoard[8] = 'X';
                    token = '0';
                    DestroyWindow(t9);
                    t9 = CreateWindowW(L"Button", L"X", WS_VISIBLE | WS_CHILD, 300, 300, 100, 100, hWnd, (HMENU)tic9, NULL, NULL);
                }
            }

            
            else
            {
                if (LOWORD(wp) == tic1 && GameBoard[0] != 'X' && GameBoard[0] != '0')
                {
                    GameBoard[0] = '0';
                    token = 'X';
                    DestroyWindow(t1);
                    t1 = CreateWindowW(L"Button", L"0", WS_VISIBLE | WS_CHILD, 100, 100, 100, 100, hWnd, (HMENU)tic1, NULL, NULL);
                }
                else if (LOWORD(wp) == tic2 && GameBoard[1] != 'X' && GameBoard[1] != '0')
                {
                    GameBoard[1] = '0';
                    token = 'X';
                    DestroyWindow(t2);
                    t2 = CreateWindowW(L"Button", L"0", WS_VISIBLE | WS_CHILD, 200, 100, 100, 100, hWnd, (HMENU)tic2, NULL, NULL);
                }
                else if (LOWORD(wp) == tic3 && GameBoard[2] != 'X' && GameBoard[2] != '0')
                {
                    GameBoard[2] = '0';
                    token = 'X';
                    DestroyWindow(t3);
                    t3 = CreateWindowW(L"Button", L"0", WS_VISIBLE | WS_CHILD, 300, 100, 100, 100, hWnd, (HMENU)tic3, NULL, NULL);
                }
                else if (LOWORD(wp) == tic4 && GameBoard[3] != 'X' && GameBoard[3] != '0')
                {
                    GameBoard[3] = '0';
                    token = 'X';
                    DestroyWindow(t4);
                    t4 = CreateWindowW(L"Button", L"0", WS_VISIBLE | WS_CHILD, 100, 200, 100, 100, hWnd, (HMENU)tic4, NULL, NULL);
                }
                else if (LOWORD(wp) == tic5 && GameBoard[4] != 'X' && GameBoard[4] != '0')
                {
                    GameBoard[4] = '0';
                    token = 'X';
                    DestroyWindow(t5);
                    t5 = CreateWindowW(L"Button", L"0", WS_VISIBLE | WS_CHILD, 200, 200, 100, 100, hWnd, (HMENU)tic5, NULL, NULL);
                }
                else if (LOWORD(wp) == tic6 && GameBoard[5] != 'X' && GameBoard[5] != '0')
                {
                    GameBoard[5] = '0';
                    token = 'X';
                    DestroyWindow(t6);
                    t6 = CreateWindowW(L"Button", L"0", WS_VISIBLE | WS_CHILD, 300, 200, 100, 100, hWnd, (HMENU)tic6, NULL, NULL);
                }
                else if (LOWORD(wp) == tic7 && GameBoard[6] != 'X' && GameBoard[6] != '0')
                {
                    GameBoard[6] = '0';
                    token = 'X';
                    DestroyWindow(t7);
                    t7 = CreateWindowW(L"Button", L"0", WS_VISIBLE | WS_CHILD, 100, 300, 100, 100, hWnd, (HMENU)tic7, NULL, NULL);
                }
                else if (LOWORD(wp) == tic8 && GameBoard[7] != 'X' && GameBoard[7] != '0')
                {
                    GameBoard[7] = '0';
                    token = 'X';
                    DestroyWindow(t8);
                    t8 = CreateWindowW(L"Button", L"0", WS_VISIBLE | WS_CHILD, 200, 300, 100, 100, hWnd, (HMENU)tic8, NULL, NULL);
                }
                else if (LOWORD(wp) == tic9 && GameBoard[8] != 'X' && GameBoard[8] != '0')
                {
                    GameBoard[8] = '0';
                    token = 'X';
                    DestroyWindow(t9);
                    t9 = CreateWindowW(L"Button", L"0", WS_VISIBLE | WS_CHILD, 300, 300, 100, 100, hWnd, (HMENU)tic9, NULL, NULL);
                }
            }

            
           if (GameBoard[0] == 'X' && GameBoard[1] == 'X' && GameBoard[2] == 'X' ||
    GameBoard[3] == 'X' && GameBoard[4] == 'X' && GameBoard[5] == 'X' ||
    GameBoard[6] == 'X' && GameBoard[7] == 'X' && GameBoard[8] == 'X' ||
    GameBoard[0] == 'X' && GameBoard[3] == 'X' && GameBoard[6] == 'X' ||
    GameBoard[1] == 'X' && GameBoard[4] == 'X' && GameBoard[7] == 'X' ||
    GameBoard[2] == 'X' && GameBoard[5] == 'X' && GameBoard[8] == 'X' ||
    GameBoard[0] == 'X' && GameBoard[4] == 'X' && GameBoard[8] == 'X' ||
    GameBoard[2] == 'X' && GameBoard[4] == 'X' && GameBoard[6] == 'X')
{
    winner = 'X';
    MessageBoxW(hWnd, L"Player 1 (X) wins!", L"Winner", MB_OK);
}
else if (GameBoard[0] == '0' && GameBoard[1] == '0' && GameBoard[2] == '0' ||
         GameBoard[3] == '0' && GameBoard[4] == '0' && GameBoard[5] == '0' ||
         GameBoard[6] == '0' && GameBoard[7] == '0' && GameBoard[8] == '0' ||
         GameBoard[0] == '0' && GameBoard[3] == '0' && GameBoard[6] == '0' ||
         GameBoard[1] == '0' && GameBoard[4] == '0' && GameBoard[7] == '0' ||
         GameBoard[2] == '0' && GameBoard[5] == '0' && GameBoard[8] == '0' ||
         GameBoard[0] == '0' && GameBoard[4] == '0' && GameBoard[8] == '0' ||
         GameBoard[2] == '0' && GameBoard[4] == '0' && GameBoard[6] == '0')
{
    winner = '0';
    MessageBoxW(hWnd, L"Player 2 (0) wins!", L"Winner", MB_OK);
}

    bool boardFilled = true;
    for (int i = 0; i < 9; ++i) {
        if (GameBoard[i] != 'X' && GameBoard[i] != '0') {
            boardFilled = false;
            break;
        }
    }
    if (boardFilled && winner == 'L') {
        MessageBoxW(hWnd, L"The game is a tie!", L"Tie Game", MB_OK);
    }

            break;
        }
    }
    return 0;
}
