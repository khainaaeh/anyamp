cmake_minimum_required(VERSION 3.10)
project(AnyAMP)

# Указываем стандарт языка C++
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Добавляем пути к заголовочным файлам и библиотекам вручную
include_directories("/opt/homebrew/include")
link_directories("/opt/homebrew/lib")

# Источники
set(SOURCES
        src/main.cpp
        src/player.cpp
        src/audio_loader.cpp
        src/utils.cpp
)

# Добавляем исполняемый файл
add_executable(AnyAMP ${SOURCES})

# Линкуем библиотеки вручную
target_link_libraries(AnyAMP PRIVATE portaudio sndfile)