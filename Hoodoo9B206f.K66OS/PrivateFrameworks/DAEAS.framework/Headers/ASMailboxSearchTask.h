/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASSearchTask.h"


@interface ASMailboxSearchTask : ASSearchTask {
}
- (void)_appendSearchOptions:(id)options;	// 0x321b0265
- (void)_appendSearchQuery:(id)query;	// 0x321b00f1
- (void)finishWithError:(id)error;	// 0x321b0b81
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x321b05a5
- (int)numDownloadedElements;	// 0x321b10ed
- (void)performTask;	// 0x321affd1
- (BOOL)processContext:(id)context;	// 0x321b0661
- (id)replacementObjectForEmailItem:(id)emailItem;	// 0x321b05b9
- (id)requestBody;	// 0x321b04b5
- (BOOL)requiresEASVersionInformaton;	// 0x321affcd
@end
