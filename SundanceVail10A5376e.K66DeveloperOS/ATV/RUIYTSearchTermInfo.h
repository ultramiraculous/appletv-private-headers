/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCoding.h"

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface RUIYTSearchTermInfo : XXUnknownSuperclass <NSCoding> {
	NSString *_searchTerm;	// 4 = 0x4
	NSDate *_timestamp;	// 8 = 0x8
}
@property(retain, nonatomic) NSString *searchTerm;	// G=0x264a15; S=0x264a25; @synthesize=_searchTerm
@property(retain, nonatomic) NSDate *timestamp;	// G=0x264a4d; S=0x264a5d; @synthesize=_timestamp
- (id)initWithCoder:(id)coder;	// 0x264945
- (void).cxx_destruct;	// 0x264a85
- (void)encodeWithCoder:(id)coder;	// 0x264a09
- (unsigned)hash;	// 0x264a11
- (BOOL)isEqual:(id)equal;	// 0x264a0d
// declared property getter: - (id)searchTerm;	// 0x264a15
// declared property setter: - (void)setSearchTerm:(id)term;	// 0x264a25
// declared property setter: - (void)setTimestamp:(id)timestamp;	// 0x264a5d
// declared property getter: - (id)timestamp;	// 0x264a4d
@end

