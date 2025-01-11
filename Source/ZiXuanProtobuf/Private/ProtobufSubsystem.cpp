// Fill out your copyright notice in the Description page of Project Settings.


#include "ProtobufSubsystem.h"
#include <fstream>
#include "ZiXuanProtobuf/protobufCppCode/Phone.pb.h"

FString UProtobufSubsystem::LoadProtobufFromPath(FString Path)
{
	Phone* m_Phone = new Phone();
	LoadMessageFromDisk(m_Phone, Path);
	UE_LOG(LogTemp, Log, TEXT("%d"), m_Phone->number());
	UE_LOG(LogTemp, Log, TEXT("%s"), UTF8_TO_TCHAR(m_Phone->name().c_str()));
	UE_LOG(LogTemp, Log, TEXT("%s"), UTF8_TO_TCHAR(m_Phone->address().c_str()));
	FString Address = UTF8_TO_TCHAR(m_Phone->address().c_str());
	delete m_Phone;
	m_Phone = nullptr;

	return Address;
}

void UProtobufSubsystem::LoadMessageFromDisk(google::protobuf::Message* Message, FString Path)
{
	if(Message)
	{
		std::ifstream inputput(TCHAR_TO_UTF8(*Path), std::ios::binary);
		Message->ParseFromIstream(&inputput);
		inputput.close();
	}
}

void UProtobufSubsystem::GenerateProtobufFromPath(FString Path)
{
	SaveMessageToDisk(nullptr, Path);
}

void UProtobufSubsystem::SaveMessageToDisk(const google::protobuf::Message* Message, FString Path)
{
	Phone* m_Phone = new Phone();
	m_Phone->set_address("上海市");
	m_Phone->set_number(121254);
	m_Phone->set_name("王二狗");
	Message = m_Phone;
	if(Message)
	{
		std::ofstream output(TCHAR_TO_UTF8(*Path), std::ios::binary);
		Message->SerializeToOstream(&output);
		output.close();

		delete Message;
		Message = nullptr;
	}
}
