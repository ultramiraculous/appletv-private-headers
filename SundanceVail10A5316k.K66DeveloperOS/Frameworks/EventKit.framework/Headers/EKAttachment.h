/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKObject.h"

@class NSURL, NSNumber, NSString;

@interface EKAttachment : EKObject {
}
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x30e54109; 
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x30e54331; 
@property(readonly, assign, nonatomic) NSString *fileFormat;	// G=0x30e54179; 
@property(readonly, assign, nonatomic) NSString *fileName;	// G=0x30e54125; 
@property(readonly, assign, nonatomic) NSNumber *fileSize;	// G=0x30e541e1; 
@property(readonly, assign, nonatomic) BOOL isBinary;	// G=0x30e54195; 
@property(readonly, assign, nonatomic) NSURL *localURL;	// G=0x30e541c5; 
- (id)init;	// 0x30e5409d
// declared property getter: - (id)URL;	// 0x30e54109
// declared property getter: - (id)UUID;	// 0x30e54331
- (int)compareFileNames:(id)names;	// 0x30e5434d
- (id)description;	// 0x30e54401
// declared property getter: - (id)fileFormat;	// 0x30e54179
// declared property getter: - (id)fileName;	// 0x30e54125
// declared property getter: - (id)fileSize;	// 0x30e541e1
// declared property getter: - (BOOL)isBinary;	// 0x30e54195
- (BOOL)isEqual:(id)equal;	// 0x30e54389
// declared property getter: - (id)localURL;	// 0x30e541c5
@end

