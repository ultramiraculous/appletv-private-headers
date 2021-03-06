/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDKeyedCollection.h"


@interface EDContentFormatsCollection : EDKeyedCollection {
	unsigned mNextContentFormatId;	// 12 = 0xc
}
- (id)init;	// 0x31c14e59
- (void)addDefaultWithNSString:(id)nsstring formatId:(unsigned)anId;	// 0x31c15335
- (unsigned)addObject:(id)object;	// 0x31c155e9
- (unsigned)addOrEquivalentObject:(id)object;	// 0x31c1a175
- (bool)isOverwritingKeyOK;	// 0x31dab365
- (void)setupDefaults;	// 0x31c14f11
@end

