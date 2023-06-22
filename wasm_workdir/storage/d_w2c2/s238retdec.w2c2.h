#ifndef s238retdec_H
#define s238retdec_H

#include "w2c2_base.h"

typedef struct s238retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s238retdecInstance;

void f0(s238retdecInstance*);

void f1(s238retdecInstance*);

U32 f2(s238retdecInstance*);

void f3(s238retdecInstance*,U32);

U32 f4(s238retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s238retdecInstance*,U32,U32,U32,U32,U32);

void f6(s238retdecInstance*,U32);

void f7(s238retdecInstance*,U32,U32,U32);

void f8(s238retdecInstance*,U32,U32,U32);

void s238retdec____wasm_call_ctors(s238retdecInstance*i);

void s238retdec____wasm_apply_data_relocs(s238retdecInstance*i);

U32 s238retdec_func_1(s238retdecInstance*i);

void s238retdec_call_cb(s238retdecInstance*i,U32 l0);

void s238retdecInstantiate(s238retdecInstance* instance, void* resolve(const char* module, const char* name));

void s238retdecFreeInstance(s238retdecInstance* instance);

#endif /* s238retdec_H */

