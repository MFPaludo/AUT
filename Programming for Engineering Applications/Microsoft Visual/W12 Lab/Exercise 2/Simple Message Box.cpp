#include <Windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	int answer = MessageBox(NULL, L"Are you ready for the COMP500/ENSE501 Final Practical Exam?", L"COMP500/ENSE501", MB_YESNO);

	if (IDYES == answer)
	{
		MessageBox(NULL, L"Excellent!", L"Excellent", MB_OK);
	}
	else if (IDNO == answer)
	{
		MessageBox(NULL, L"More study required!", L"More study required", MB_OK);
	}

	return 0;
}