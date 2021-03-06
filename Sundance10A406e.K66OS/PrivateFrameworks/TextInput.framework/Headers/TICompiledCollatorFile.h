/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import "TextInput-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface TICompiledCollatorFile : NSObject {
	int m_descriptor;	// 4 = 0x4
	char *m_mappedFile;	// 8 = 0x8
	long long m_length;	// 12 = 0xc
	NSString *m_path;	// 20 = 0x14
}
+ (UCollator *)createCollatorWithType:(int)type;	// 0x37422ba5
+ (id)sharedCollatorFile;	// 0x3742275d
- (id)initWithPath:(id)path error:(unsigned *)error;	// 0x374228f1
- (UCollator *)createCollatorWithType:(int)type;	// 0x37422af1
- (void)dealloc;	// 0x37422a69
@end

