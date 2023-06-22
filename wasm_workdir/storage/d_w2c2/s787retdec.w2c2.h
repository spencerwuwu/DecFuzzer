#ifndef s787retdec_H
#define s787retdec_H

#include "w2c2_base.h"

typedef struct s787retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s787retdecInstance;

void f0(s787retdecInstance*);

void f1(s787retdecInstance*);

U32 f2(s787retdecInstance*);

void f3(s787retdecInstance*,U32);

U32 f4(s787retdecInstance*,U32,U32,U32);

void f5(s787retdecInstance*,U32,U32,U32,U32,U32);

void f6(s787retdecInstance*,U32);

void f7(s787retdecInstance*,U32,U32,U32);

void f8(s787retdecInstance*,U32,U32,U32);

void s787retdec____wasm_call_ctors(s787retdecInstance*i);

void s787retdec____wasm_apply_data_relocs(s787retdecInstance*i);

U32 s787retdec_func_1(s787retdecInstance*i);

void s787retdec_call_cb(s787retdecInstance*i,U32 l0);

void s787retdecInstantiate(s787retdecInstance* instance, void* resolve(const char* module, const char* name));

void s787retdecFreeInstance(s787retdecInstance* instance);

#endif /* s787retdec_H */

