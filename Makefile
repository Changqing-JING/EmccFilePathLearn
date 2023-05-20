main.js: main.cpp
	em++ -sSINGLE_FILE -sFORCE_FILESYSTEM -sNODERAWFS=1 -sENVIRONMENT=node -o out/$@ $<