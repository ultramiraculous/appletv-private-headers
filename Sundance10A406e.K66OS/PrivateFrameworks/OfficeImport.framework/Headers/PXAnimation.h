/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface PXAnimation : NSObject {
}
+ (void)readAnimAudioElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x350193d9
+ (void)readAnimCmdElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x35011f7d
+ (void)readAnimEffectElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x34fe2a45
+ (void)readAnimElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x34fe9c11
+ (void)readAnimMotionElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x34f9aa39
+ (void)readAnimParallelElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x34f9a5cd
+ (void)readAnimRotationElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x3501aae1
+ (void)readAnimScaleElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x3500e839
+ (void)readAnimSequentialElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x34f9a525
+ (void)readAnimSetElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x34fe285d
+ (id)readAnimVariant:(xmlNode *)variant;	// 0x34fe2971
+ (void)readAnimVideoElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x350245dd
+ (void)readAnimationFromTimingXmlNode:(xmlNode *)timingXmlNode tgtAnimation:(id)animation drawingState:(id)state;	// 0x34f927c9
+ (int)readChartBuildType:(id)type;	// 0x350e0235
+ (void)readChartType:(id)type oleChartTarget:(id)target;	// 0x350e0195
+ (void)readChildTimeNodeList:(xmlNode *)list commonTimeNodeData:(id)data drawingState:(id)state;	// 0x34f9a3dd
+ (void)readCommonBehaviorData:(xmlNode *)data tgtCommonBehaviorData:(id)data2 drawingState:(id)state;	// 0x34f9acc9
+ (void)readCommonMediaNodeData:(xmlNode *)data commonMediaData:(id)data2 drawingState:(id)state;	// 0x35019511
+ (void)readCommonTimeNodeData:(xmlNode *)data commonTimeNodeData:(id)data2 drawingState:(id)state;	// 0x34f96a95
+ (void)readCondition:(xmlNode *)condition timeCondition:(id)condition2 drawingState:(id)state;	// 0x34f9a7c9
+ (id)readGraphicBuild:(xmlNode *)build;	// 0x34fff4f5
+ (void)readIterate:(xmlNode *)iterate commonTimeNodeData:(id)data drawingState:(id)state;	// 0x34fff68d
+ (id)readOleChartBuild:(xmlNode *)build;	// 0x350e02b9
+ (id)readParagraphBuild:(xmlNode *)build;	// 0x34fe2c99
+ (void)readPointFromNode:(xmlNode *)node tgtPoint:(CGPoint *)point;	// 0x34f9b6bd
+ (void)readPresetClass:(id)aClass commonTimeNodeData:(id)data;	// 0x34f9a941
+ (void)readRestartType:(id)type commonTimeNodeData:(id)data;	// 0x34f96ecd
+ (id)readShapeTarget:(xmlNode *)target drawingState:(id)state;	// 0x34f9af81
+ (void)readStConditionList:(xmlNode *)list commonTimeNodeData:(id)data drawingState:(id)state;	// 0x34f9a675
+ (id)readTgtElement:(xmlNode *)element drawingState:(id)state;	// 0x34f9adc9
+ (void)readTimeNodeType:(id)type commonTimeNodeData:(id)data;	// 0x34f96e1d
+ (void)readTriggerEvent:(id)event timeCondition:(id)condition;	// 0x34fecb1d
@end
