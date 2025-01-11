// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "google/protobuf/message.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ThirdParty/UEProtobuf/include/google/protobuf/message.h"
#include "ProtobufSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class ZIXUANPROTOBUF_API UProtobufSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	// 加载
	UFUNCTION(BlueprintCallable)
	FString LoadProtobufFromPath(FString Path);

	void LoadMessageFromDisk(google::protobuf::Message* Message, FString Path);
	
	// 生成
	UFUNCTION(BlueprintCallable)
	void GenerateProtobufFromPath(FString Path);
	
	void SaveMessageToDisk(const google::protobuf::Message* Message, FString Path);
};
