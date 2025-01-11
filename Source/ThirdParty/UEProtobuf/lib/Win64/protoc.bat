@echo off
.\protoc --proto_path=../../../../../../Proto --cpp_out=../../../../../../ProtoOut Phone.proto
echo success
pause