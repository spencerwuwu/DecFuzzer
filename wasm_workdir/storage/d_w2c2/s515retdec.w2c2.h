#ifndef s515retdec_H
#define s515retdec_H

#include "w2c2_base.h"

typedef struct s515retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s515retdecInstance;

void f0(s515retdecInstance*);

void f1(s515retdecInstance*);

U32 f2(s515retdecInstance*);

void f3(s515retdecInstance*,U32);

U32 f4(s515retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s515retdecInstance*,U32,U32,U32,U32,U32);

void f6(s515retdecInstance*,U32);

void f7(s515retdecInstance*,U32,U32,U32);

void f8(s515retdecInstance*,U32,U32,U32);

void s515retdec____wasm_call_ctors(s515retdecInstance*i);

void s515retdec____wasm_apply_data_relocs(s515retdecInstance*i);

U32 s515retdec_func_1(s515retdecInstance*i);

void s515retdec_call_cb(s515retdecInstance*i,U32 l0);

void s515retdecInstantiate(s515retdecInstance* instance, void* resolve(const char* module, const char* name));

void s515retdecFreeInstance(s515retdecInstance* instance);

#endif /* s515retdec_H */

