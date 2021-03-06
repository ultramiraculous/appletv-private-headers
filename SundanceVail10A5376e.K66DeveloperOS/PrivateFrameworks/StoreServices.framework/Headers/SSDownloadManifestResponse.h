/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSArray;

@interface SSDownloadManifestResponse : NSObject <SSXPCCoding, NSCoding> {
	NSArray *_validDownloads;	// 4 = 0x4
}
@property(copy) NSArray *validDownloads;	// G=0x32caed59; S=0x32caed69; 
- (id)initWithCoder:(id)coder;	// 0x32caedad
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x32caf075
- (id)copyXPCEncoding;	// 0x32caef75
- (void)dealloc;	// 0x32caed0d
- (void)encodeWithCoder:(id)coder;	// 0x32caeead
// declared property setter: - (void)setValidDownloads:(id)downloads;	// 0x32caed69
// declared property getter: - (id)validDownloads;	// 0x32caed59
@end

