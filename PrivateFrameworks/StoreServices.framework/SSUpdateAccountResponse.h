/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSUpdateAccountResponse : NSObject {
    unsigned long long  _credentialSource;
    SSAccount * _updatedAccount;
}

@property (nonatomic, readonly) unsigned long long credentialSource;
@property (nonatomic, readonly) SSAccount *updatedAccount;

- (void).cxx_destruct;
- (unsigned long long)credentialSource;
- (id)initWithUpdatedAccount:(id)arg1 credentialSource:(unsigned long long)arg2;
- (id)updatedAccount;

@end