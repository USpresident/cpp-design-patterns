include_directories(../head)

aux_source_directory(. SRC)

add_library(mediator SHARED ${SRC})