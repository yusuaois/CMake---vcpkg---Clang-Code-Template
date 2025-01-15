#include "httplib.h"
#include <iostream>

using namespace std;

int main() {
  cout << "Hello World!" << endl;

  // HTTP
    httplib::Headers headers;
  headers.insert({"content-type", "text/html; charset=utf-8"});
  httplib::Client cli("http://www.baidu.com");
  auto res = cli.Get("/",headers);
  cout << res << endl;
  if (res) {
    cout << res->body << endl;
  }
  // system("pause");
  return 0;
}