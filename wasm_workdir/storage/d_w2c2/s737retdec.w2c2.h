#ifndef s737retdec_H
#define s737retdec_H

#include "w2c2_base.h"

typedef struct s737retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s737retdecInstance;

void f0(s737retdecInstance*);

void f1(s737retdecInstance*);

U32 f2(s737retdecInstance*);

void f3(s737retdecInstance*,U32);

U32 f4(s737retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s737retdecInstance*,U32,U32,U32,U32,U32);

void f6(s737retdecInstance*,U32);

void f7(s737retdecInstance*,U32,U32,U32);

void f8(s737retdecInstance*,U32,U32,U32);

void s737retdec____wasm_call_ctors(s737retdecInstance*i);

void s737retdec____wasm_apply_data_relocs(s737retdecInstance*i);

U32 s737retdec_func_1(s737retdecInstance*i);

void s737retdec_call_cb(s737retdecInstance*i,U32 l0);

void s737retdecInstantiate(s737retdecInstance* instance, void* resolve(const char* module, const char* name));

void s737retdecFreeInstance(s737retdecInstance* instance);

#endif /* s737retdec_H */

