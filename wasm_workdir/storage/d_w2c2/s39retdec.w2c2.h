#ifndef s39retdec_H
#define s39retdec_H

#include "w2c2_base.h"

typedef struct s39retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s39retdecInstance;

void f0(s39retdecInstance*);

void f1(s39retdecInstance*);

U32 f2(s39retdecInstance*);

void f3(s39retdecInstance*,U32);

U32 f4(s39retdecInstance*,U32,U32,U32);

void f5(s39retdecInstance*,U32,U32,U32,U32,U32);

void f6(s39retdecInstance*,U32);

void f7(s39retdecInstance*,U32,U32,U32);

void f8(s39retdecInstance*,U32,U32,U32);

void s39retdec____wasm_call_ctors(s39retdecInstance*i);

void s39retdec____wasm_apply_data_relocs(s39retdecInstance*i);

U32 s39retdec_func_1(s39retdecInstance*i);

void s39retdec_call_cb(s39retdecInstance*i,U32 l0);

void s39retdecInstantiate(s39retdecInstance* instance, void* resolve(const char* module, const char* name));

void s39retdecFreeInstance(s39retdecInstance* instance);

#endif /* s39retdec_H */

