// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "LidarDescription.generated.h"

USTRUCT()
struct FLidarDescription
{
  GENERATED_USTRUCT_BODY()

  /** Number of lasers */
  UPROPERTY(EditDefaultsOnly, Category = "Lidar Description")
  int Channels = 32;

  /** Measure distance */
  UPROPERTY(EditDefaultsOnly, Category = "Lidar Description")
  float Range = 5000;

  /** Points generated by all lasers per second */
  UPROPERTY(EditDefaultsOnly, Category = "Lidar Description")
  float PointsPerSecond = 56000;

  /** Lidar rotation frequency */
  UPROPERTY(EditDefaultsOnly, Category = "Lidar Description")
  float RotationFrequency = 10;

  /**
    Upper laser angle, counts from horizontal,
    positive values means above horizontal line
  */
  UPROPERTY(EditDefaultsOnly, Category = "Lidar Description")
  float UpperFovLimit = 10;

  /**
    Lower laser angle, counts from horizontal,
    negative values means under horizontal line
  */
  UPROPERTY(EditDefaultsOnly, Category = "Lidar Description")
  float LowerFovLimit = -30;

  /** wether to show debug points of laser hits in simulator */
  UPROPERTY(EditDefaultsOnly, Category = "Lidar Description")
  bool ShowDebugPoints = false;

  /** Position relative to the player. */
  UPROPERTY(Category = "Lidar Description", EditDefaultsOnly)
  FVector Position = {0.0f, 0.0f, 250.0f};

  /** Rotation relative to the player. */
  UPROPERTY(Category = "Lidar Description", EditDefaultsOnly)
  FRotator Rotation = {0.0f, 0.0f, 0.0f};
};
