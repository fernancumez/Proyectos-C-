
#include<Windows.h>

int DisplayResurceNAMessageBox() {
	int msgboxID = MessageBox(
		NULL, 
		(LPCWSTR)L"Resource not available\nDo you want to try aganin)", 
		(LPCWSTR)L"Account Details", 
		MB_ICONWARNING | MB_CANCELTRYCONTINUE | MB_DEFBUTTON2);

	switch (msgboxID) {
	case IDCANCEL:
		break;
	case IDTRYAGAIN:
		break;
	case IDCONTINUE:
		break;
	}

	return msgboxID;
}