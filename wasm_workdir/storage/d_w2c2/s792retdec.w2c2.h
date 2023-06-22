#ifndef s792retdec_H
#define s792retdec_H

#include "w2c2_base.h"

typedef struct s792retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s792retdecInstance;

void f0(s792retdecInstance*);

void f1(s792retdecInstance*);

U32 f2(s792retdecInstance*);

void f3(s792retdecInstance*,U32);

U32 f4(s792retdecInstance*,U32,U32,U32);

void f5(s792retdecInstance*,U32,U32,U32,U32,U32);

void f6(s792retdecInstance*,U32);

void f7(s792retdecInstance*,U32,U32,U32);

void f8(s792retdecInstance*,U32,U32,U32);

void s792retdec____wasm_call_ctors(s792retdecInstance*i);

void s792retdec____wasm_apply_data_relocs(s792retdecInstance*i);

U32 s792retdec_func_1(s792retdecInstance*i);

void s792retdec_call_cb(s792retdecInstance*i,U32 l0);

void s792retdecInstantiate(s792retdecInstance* instance, void* resolve(const char* module, const char* name));

void s792retdecFreeInstance(s792retdecInstance* instance);

#endif /* s792retdec_H */

