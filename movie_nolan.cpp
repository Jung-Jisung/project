#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;


int main()
{
  std::ifstream inFile;
  std::ofstream outFile;

  inFile.open("imdb_top250.txt");
  outFile.open("nolan.txt");

  if (!inFile)
  {
    std::cerr << "Couldn’t open input file\n";
    exit(1);
  }

  if (!outFile)
  {
    std::cerr << "Couldn’t open output file\n";
    exit(1);
  }

  std::string line;
  std::stringstream ss;

  /* 
    Input file에서 Christopher Nolan 감독의 작품을 선별하여 순위, 영화제목, 점수를 출력하세요.
    answer.txt와 똑같은 결과를 출력하세요.
    결과는 실행파일인 test를 실행하여 (./test) "Test Success"가 출력되면 됩니다.

    string을 int로 바꿀 때는std::stoi(string), double로 바꿀 때는 std::stod(string)을 쓰는 것을 추천합니다.
    출력의 크기(width)는 순위는 3, 영화제목은 25이고 점수는 따로 width를 지정하지 않아도 됩니다.
  */

  // (To Do) Implement here
  for(int i=0;i<250;i++)
  {
	  getline(inFile,line);
	  ss << line;
	  
	  string rank;
	  string title;
	  string score;
	  string dir;

	  getline(ss,rank,'/');
	  getline(ss,title,'/');
	  getline(ss,score,'/');
	  getline(ss,dir,'/');


	  ss.str("");

	  double Score = stod(score);

	  if( dir == "Christopher Nolan")
	  {
		  cout << fixed ;
		  outFile << setw(3) << left << rank << "  " << setw(25) << left << title << setprecision(3) << Score << '\n';
	  }
  }
  inFile.close();
  outFile.close();

  return 0;
}
