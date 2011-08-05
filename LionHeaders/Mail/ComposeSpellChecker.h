/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSSpellChecker.h"

@interface ComposeSpellChecker : NSSpellChecker
{
}

- (void)_mail_setObject:(id)arg1 forSpellDocumentTag:(long long)arg2;
- (id)_mail_objectForSpellDocumentTag:(long long)arg1;
- (void)_mail_removeObjectForSpellDocumentTag:(long long)arg1;
- (void)setPostCompletedNotification:(BOOL)arg1 forSpellDocumentWithTag:(long long)arg2;
- (long long)currentSpellDocumentTag;
- (void)_mail_postingTimerFired:(id)arg1;
- (void)_mail_spellPanelDidClose:(id)arg1;
- (void)_mail_willCheckSpellDocumentWithTag:(long long)arg1;
- (void)_mail_didCheckSpellDocumentWithTag:(long long)arg1 hasErrors:(BOOL)arg2;
- (BOOL)_mail_unifiedTextCheckingResultsHaveErrors:(id)arg1;
- (id)checkString:(id)arg1 range:(struct _NSRange)arg2 types:(unsigned long long)arg3 options:(id)arg4 inSpellDocumentWithTag:(long long)arg5 orthography:(id *)arg6 wordCount:(long long *)arg7;
- (long long)requestCheckingOfString:(id)arg1 range:(struct _NSRange)arg2 types:(unsigned long long)arg3 options:(id)arg4 inSpellDocumentWithTag:(long long)arg5 completionHandler:(id)arg6;
- (id)spellingPanel;
- (void)closeSpellDocumentWithTag:(long long)arg1;

@end
