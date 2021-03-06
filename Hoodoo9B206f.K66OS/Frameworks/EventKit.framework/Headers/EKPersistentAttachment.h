/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPersistentObject.h"
#import "NSCopying.h"
#import "EventKit-Structs.h"

@class NSURL, NSString, NSDictionary, NSNumber;

@interface EKPersistentAttachment : EKPersistentObject <NSCopying> {
}
@property(copy, nonatomic) NSURL *URL;	// G=0x31f5708d; S=0x31f570a9; 
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x31f571e1; 
@property(copy, nonatomic) NSDictionary *XProperties;	// G=0x31f571fd; S=0x31f5724d; 
@property(copy, nonatomic) NSString *fileFormat;	// G=0x31f570fd; S=0x31f57119; 
@property(copy, nonatomic) NSString *fileName;	// G=0x31f570c5; S=0x31f570e1; 
@property(copy, nonatomic) NSNumber *fileSize;	// G=0x31f571a9; S=0x31f571c5; 
@property(readonly, assign, nonatomic) BOOL isBinary;	// G=0x31f57135; 
@property(copy, nonatomic) NSURL *localURL;	// G=0x31f57171; S=0x31f5718d; 
+ (id)relations;	// 0x31f56ed5
// declared property getter: - (id)URL;	// 0x31f5708d
// declared property getter: - (id)UUID;	// 0x31f571e1
// declared property getter: - (id)XProperties;	// 0x31f571fd
- (id)copyWithZone:(NSZone *)zone;	// 0x31f56f65
- (id)description;	// 0x31f572a5
// declared property getter: - (id)fileFormat;	// 0x31f570fd
// declared property getter: - (id)fileName;	// 0x31f570c5
// declared property getter: - (id)fileSize;	// 0x31f571a9
// declared property getter: - (BOOL)isBinary;	// 0x31f57135
// declared property getter: - (id)localURL;	// 0x31f57171
// declared property setter: - (void)setFileFormat:(id)format;	// 0x31f57119
// declared property setter: - (void)setFileName:(id)name;	// 0x31f570e1
// declared property setter: - (void)setFileSize:(id)size;	// 0x31f571c5
- (void)setIsBinary:(BOOL)binary;	// 0x31f57155
// declared property setter: - (void)setLocalURL:(id)url;	// 0x31f5718d
// declared property setter: - (void)setURL:(id)url;	// 0x31f570a9
// declared property setter: - (void)setXProperties:(id)properties;	// 0x31f5724d
@end

