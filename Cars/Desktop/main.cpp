#include "MainWindow.h"

int main()
{
	e3::WindowCreateInfo info;
	info.Name = "Cars";
	info.Size.Width = 400;
	info.Size.Height = 700;
	info.Resoluction.Width = 400;
	info.Resoluction.Height = 700;

	MainWindow manWindow(&info);
	manWindow.Show();

	return 0;
}
