#ifndef s139r2_H
#define s139r2_H

#include "w2c2_base.h"

typedef struct s139r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s139r2Instance;

void f0(s139r2Instance*);

void f1(s139r2Instance*);

U32 f2(s139r2Instance*);

void f3(s139r2Instance*,U32);

U32 f4(s139r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s139r2Instance*,U32,U32,U32,U32,U32);

void f6(s139r2Instance*,U32);

void f7(s139r2Instance*,U32,U32,U32);

void f8(s139r2Instance*,U32,U32,U32);

void s139r2____wasm_call_ctors(s139r2Instance*i);

void s139r2____wasm_apply_data_relocs(s139r2Instance*i);

U32 s139r2_func_1(s139r2Instance*i);

void s139r2_call_cb(s139r2Instance*i,U32 l0);

void s139r2Instantiate(s139r2Instance* instance, void* resolve(const char* module, const char* name));

void s139r2FreeInstance(s139r2Instance* instance);

#endif /* s139r2_H */

