/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentWebServiceRequest : NSObject {
    <PKPaymentWebServiceTargetDeviceProtocol> * _targetDevice;
    bool  _useLegacyFormat;
}

@property (nonatomic, retain) <PKPaymentWebServiceTargetDeviceProtocol> *targetDevice;
@property (nonatomic) bool useLegacyFormat;

+ (id)_HTTPBodyWithDictionary:(id)arg1;
+ (id)authHeaderWithAccount:(id)arg1;

- (void).cxx_destruct;
- (id)_murlRequestWithServiceURL:(id)arg1 endpointComponents:(id)arg2 queryParameters:(id)arg3 account:(id)arg4;
- (id)_murlRequestWithURL:(id)arg1;
- (id)_murlRequestWithURL:(id)arg1 account:(id)arg2;
- (void)setTargetDevice:(id)arg1;
- (void)setUseLegacyFormat:(bool)arg1;
- (void)signAndFinalizeRequest:(id)arg1 httpBodyContents:(id)arg2 webService:(id)arg3 completion:(id /* block */)arg4;
- (id)targetDevice;
- (bool)useLegacyFormat;

@end
