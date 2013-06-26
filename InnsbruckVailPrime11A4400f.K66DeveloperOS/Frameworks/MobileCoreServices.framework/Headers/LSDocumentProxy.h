/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

#import "LSResourceProxy.h"

@class NSString;

@interface LSDocumentProxy : LSResourceProxy {
	BOOL _sourceIsManaged;	// 38 = 0x26
	NSString *_name;	// 40 = 0x28
	NSString *_typeIdentifier;	// 44 = 0x2c
	NSString *_MIMEType;	// 48 = 0x30
}
@property(readonly, assign, nonatomic) NSString *MIMEType;	// G=0x2e8390f5; @synthesize=_MIMEType
@property(readonly, assign, nonatomic) NSString *name;	// G=0x2e8390d5; @synthesize=_name
@property(readonly, assign, nonatomic) BOOL sourceIsManaged;	// G=0x2e839105; @synthesize=_sourceIsManaged
@property(readonly, assign, nonatomic) NSString *typeIdentifier;	// G=0x2e8390e5; @synthesize=_typeIdentifier
+ (id)documentProxyForName:(id)name type:(id)type MIMEType:(id)type3;	// 0x2e838ff5
+ (id)documentProxyForName:(id)name type:(id)type MIMEType:(id)type3 sourceIsManaged:(BOOL)managed;	// 0x2e838f9d
- (id)initWithName:(id)name type:(id)type MIMEType:(id)type3 sourceIsManaged:(BOOL)managed;	// 0x2e838ed5
// declared property getter: - (id)MIMEType;	// 0x2e8390f5
- (void)bind;	// 0x2e838d21
- (void)dealloc;	// 0x2e83904d
- (id)iconStyleDomain;	// 0x2e8390c5
// declared property getter: - (id)name;	// 0x2e8390d5
// declared property getter: - (BOOL)sourceIsManaged;	// 0x2e839105
// declared property getter: - (id)typeIdentifier;	// 0x2e8390e5
@end
