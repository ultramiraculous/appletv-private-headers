/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface PBParagraphProperties : NSObject {
}
+ (int)pptAlignmentTypeWithOADTextAlignType:(int)oadtextAlignType;	// 0x37b1aa9d
+ (int)pptFontAlignWithOADTextFontAlign:(int)oadtextFontAlign;	// 0x37b1aac1
+ (short)pptTextSpacingWithOADParaSpacing:(id)oadparaSpacing defaultPptParaSpacing:(short)spacing;	// 0x37b1a9f1
+ (void)readAlign:(id)align pptAlignmentType:(int)type;	// 0x378b974d
+ (void)readParagraphProperties:(id)properties paragraphProperty:(PptParaProperty *)property bulletStyle:(PptParaProperty9 *)style isMaster:(BOOL)master state:(id)state;	// 0x378b8e4d
+ (void)readParagraphProperties:(id)properties paragraphPropertyRun:(PptParaRun *)run bulletStyle:(PptParaProperty9 *)style state:(id)state;	// 0x3790ec21
+ (void)writeParagraphProperties:(id)properties paragraphProperties:(PptParaProperty *)properties2 bulletStyle:(PptParaProperty9 *)style state:(id)state;	// 0x37b1a0fd
+ (void)writeTabStopsFromParagraphProperties:(id)paragraphProperties toParagraphProperties:(PptParaProperty *)paragraphProperties2 state:(id)state;	// 0x37b1a8d9
@end

