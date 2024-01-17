// ex6.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
using namespace std;
class Box
{
	float width;
	float height;
	float depth;

public:
	Box(float width, float height, float depth)
	{
		this->width = width;
		this->height = height;
		this->depth = depth;
	}

	float GetSurface()
	{
		float surface = (width * height + height * depth + depth * width) * 2;
		return surface;
	}

	float GetVolume()
	{
		float volume = width * height * depth;
		return volume;
	}
};

class InputUtility
{
public:
	static double InputNumber(string message)
	{
		double inputNumber;
		cout << (message);
		cin >> inputNumber;
		return inputNumber;
	}
};

int main()
{
	float width = (float)InputUtility::InputNumber("幅：");
	float height = (float)InputUtility::InputNumber("高さ：");
	float depth = (float)InputUtility::InputNumber("奥行：");

	Box* box = new Box(width, height, depth);

	// 作られたboxのインスタンスを用いて表面積と体積を取り出して表示
	float surface = box->GetSurface();
	float volume = box->GetVolume();
	cout << "表面積:" << surface << ", 体積:" << volume << endl;
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
