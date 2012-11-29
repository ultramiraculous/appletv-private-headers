/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDate, NSData, PKPrintSettings;

@interface PKJob : NSObject {
	int number;	// 4 = 0x4
	int mediaProgress;	// 8 = 0x8
	int mediaSheets;	// 12 = 0xc
	int mediaSheetsCompleted;	// 16 = 0x10
	NSString *printerDisplayName;	// 20 = 0x14
	int printerKind;	// 24 = 0x18
	NSString *printerLocation;	// 28 = 0x1c
	PKPrintSettings *settings;	// 32 = 0x20
	int state;	// 36 = 0x24
	NSDate *timeAtCompleted;	// 40 = 0x28
	NSDate *timeAtCreation;	// 44 = 0x2c
	NSDate *timeAtProcessing;	// 48 = 0x30
	NSData *thumbnailImage;	// 52 = 0x34
}
@property(assign, nonatomic) int mediaProgress;	// G=0x3566ddf9; S=0x3566de09; @synthesize
@property(assign, nonatomic) int mediaSheets;	// G=0x3566de19; S=0x3566de29; @synthesize
@property(assign, nonatomic) int mediaSheetsCompleted;	// G=0x3566de39; S=0x3566de49; @synthesize
@property(assign, nonatomic) int number;	// G=0x3566ddd9; S=0x3566dde9; @synthesize
@property(retain, nonatomic) NSString *printerDisplayName;	// G=0x3566de59; S=0x3566de69; @synthesize
@property(assign, nonatomic) int printerKind;	// G=0x3566de79; S=0x3566de89; @synthesize
@property(retain, nonatomic) NSString *printerLocation;	// G=0x3566de99; S=0x3566dea9; @synthesize
@property(retain, nonatomic) PKPrintSettings *settings;	// G=0x3566deb9; S=0x3566dec9; @synthesize
@property(assign, nonatomic) int state;	// G=0x3566ded9; S=0x3566dee9; @synthesize
@property(retain, nonatomic) NSData *thumbnailImage;	// G=0x3566df59; S=0x3566df69; @synthesize
@property(retain, nonatomic) NSDate *timeAtCompleted;	// G=0x3566def9; S=0x3566df09; @synthesize
@property(retain, nonatomic) NSDate *timeAtCreation;	// G=0x3566df19; S=0x3566df29; @synthesize
@property(retain, nonatomic) NSDate *timeAtProcessing;	// G=0x3566df39; S=0x3566df49; @synthesize
+ (id)currentJob;	// 0x3566ca0d
+ (id)jobs;	// 0x3566d331
- (int)cancel;	// 0x3566d9dd
// declared property getter: - (int)mediaProgress;	// 0x3566ddf9
// declared property getter: - (int)mediaSheets;	// 0x3566de19
// declared property getter: - (int)mediaSheetsCompleted;	// 0x3566de39
// declared property getter: - (int)number;	// 0x3566ddd9
// declared property getter: - (id)printerDisplayName;	// 0x3566de59
// declared property getter: - (int)printerKind;	// 0x3566de79
// declared property getter: - (id)printerLocation;	// 0x3566de99
// declared property setter: - (void)setMediaProgress:(int)progress;	// 0x3566de09
// declared property setter: - (void)setMediaSheets:(int)sheets;	// 0x3566de29
// declared property setter: - (void)setMediaSheetsCompleted:(int)completed;	// 0x3566de49
// declared property setter: - (void)setNumber:(int)number;	// 0x3566dde9
// declared property setter: - (void)setPrinterDisplayName:(id)name;	// 0x3566de69
// declared property setter: - (void)setPrinterKind:(int)kind;	// 0x3566de89
// declared property setter: - (void)setPrinterLocation:(id)location;	// 0x3566dea9
// declared property setter: - (void)setSettings:(id)settings;	// 0x3566dec9
// declared property setter: - (void)setState:(int)state;	// 0x3566dee9
// declared property setter: - (void)setThumbnailImage:(id)image;	// 0x3566df69
// declared property setter: - (void)setTimeAtCompleted:(id)completed;	// 0x3566df09
// declared property setter: - (void)setTimeAtCreation:(id)creation;	// 0x3566df29
// declared property setter: - (void)setTimeAtProcessing:(id)processing;	// 0x3566df49
// declared property getter: - (id)settings;	// 0x3566deb9
// declared property getter: - (int)state;	// 0x3566ded9
// declared property getter: - (id)thumbnailImage;	// 0x3566df59
// declared property getter: - (id)timeAtCompleted;	// 0x3566def9
// declared property getter: - (id)timeAtCreation;	// 0x3566df19
// declared property getter: - (id)timeAtProcessing;	// 0x3566df39
- (int)update;	// 0x3566dae5
@end
