#include <cstdio>
#include <filesystem>

int main(int argc, const char *argv[]) {
  std::filesystem::path path(argv[0]);
  bool const res = std::filesystem::exists(path);
  if (res) {
    printf("file exists\n");
  } else {
    printf("file not exists\n");
  }
  return 0;
}